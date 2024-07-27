/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:52:44 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/11 15:03:00 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

char	*find_path_cmd(char *cmd, char **env)
{
	char	**paths;
	char	*path;
	char	*mini_path;
	int		i;

	i = 0;
	while (ft_strnstr(env[i], "PATH=", 5) == 0)
		i++;
	paths = ft_split(env[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		mini_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(mini_path, cmd);
		free(mini_path);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	i = 0;
	while (paths[i++])
		free(paths[i]);
	free(paths);
	return (0);
}

void	error(char *s)
{
	perror(s);
	exit(1);
}

void	exec_cmd(char *av, char **env)
{
	char	**cmd;
	char	*path;
	int		i;

	i = 0;
	cmd = ft_split(av, ' ');
	path = find_path_cmd(cmd[0], env);
	if (!path)
	{
		while (cmd[i++])
			free(cmd[i]);
		free(cmd);
		error("Error!");
	}
	if (execve(path, cmd, env) == -1)
		error("Error!");
}

int	open_file(char *file, int f)
{
	int	fd;

	if (f == 0)
		fd = open(file, O_RDONLY, 0644);
	if (f == 1)
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd == -1)
		exit(127);
	return (fd);
}

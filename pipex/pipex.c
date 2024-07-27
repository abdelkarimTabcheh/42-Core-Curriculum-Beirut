/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:49:29 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/11 16:03:45 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

void	child1(char **av, char **env, int pipefd[2])
{
	int	infile;

	infile = open_file(av[1], 0);
	if (infile == -1)
		error("Failed to open infile!");
	if (dup2(infile, STDIN_FILENO) == -1)
		error("Dup2 failed for infile");
	if (dup2(pipefd[1], STDOUT_FILENO) == -1)
		error("Dup2 failed for pipefd[1]");
	close (pipefd[0]);
	close (pipefd[1]);
	close (infile);
	exec_cmd(av[2], env);
}

void	child2(char **av, char **env, int pipefd[2])
{
	int	outfile;

	outfile = open_file(av[4], 1);
	if (outfile == -1)
		error("Failed to open outfile!");
	if (dup2(pipefd[0], STDIN_FILENO) == -1)
		error("Dup2 failed for pipefd[0]");
	if (dup2(outfile, STDOUT_FILENO) == -1)
		error("Dup2 failed for outfile");
	close (pipefd[0]);
	close (pipefd[1]);
	close (outfile);
	exec_cmd(av[3], env);
}

int	pipex(char **av, char **env)
{
	pid_t	pid1;
	pid_t	pid2;
	int		pipefd[2];
	int		status;

	if (pipe(pipefd) == -1)
		error("Pipe failed!");
	pid1 = fork();
	if (pid1 == -1)
		error("Fork1 failed!");
	if (pid1 == 0)
		child1(av, env, pipefd);
	pid2 = fork();
	if (pid2 == -1)
		error("Fork2 failed!");
	if (pid2 == 0)
		child2(av, env, pipefd);
	close (pipefd[0]);
	close (pipefd[1]);
	waitpid(pid1, &status, 0);
	waitpid(pid2, &status, 0);
	return (status);
}

int	main(int ac, char **av, char **env)
{
	if (ac != 5)
	{
		ft_putstr_fd("Usage: ./pipex file1 cmd1 cmd2 file2\n", 2);
		return (1);
	}
	return (pipex(av, env));
}

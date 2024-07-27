/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:12:10 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 10:12:11 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	get_col_size(t_game *game, int fd)
{
	char	*c;
	int		y;
	int		temp;

	(void)game;
	c = get_next_line(fd);
	y = ft_strlen(c)-1;
	temp = y;
	free(c);
	if (fd < 0)
		ft_exit("Error\nThe fd is empty\n", game);
	while (1)
	{
		c = get_next_line(fd);
		if (!c)
			break ;
		y = ft_strlen(c) - 1;
		if (temp != y)
			return (-1);
		free(c);
	}
	return (y);
}

int	get_line_size(t_game *game, int fd)
{
	char	*c;
	int		x;

	x = 0;
	(void)game;
	while (1)
	{
		c = get_next_line(fd);
		if (!c)
			break ;
		x++;
		free(c);
	}
	if (x == 0)
	{
		ft_printf("Error\nThe file is empty or not exist.");
		exit(0);
	}
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:12:15 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 10:12:16 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_maps(t_game *game, int fd)
{
	int		i;
	char	*c;
	int		y;

	i = 0;
	y = game->line + 1;
	game->map = (char **)malloc(sizeof(char *) * y);
	if (!game->map)
		ft_exit("Error\n", game);
	while (i < y)
	{
		c = get_next_line(fd);
		game->map[i] = ft_strtrim(c, "\n");
		i++;
		free(c);
	}
}

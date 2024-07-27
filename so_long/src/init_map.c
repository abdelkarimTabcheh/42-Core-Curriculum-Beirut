/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:12:05 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 10:12:06 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_images(t_game *game)
{
	int	len;

	len = 64;
	game->img.wall = mlx_xpm_file_to_image(game->mlx, WALL, &len, &len);
	game->img.player = mlx_xpm_file_to_image(game->mlx, DOG, &len, &len);
	game->img.floor = mlx_xpm_file_to_image(game->mlx, FLOOR, &len, &len);
	game->img.exit = mlx_xpm_file_to_image(game->mlx, HOME, &len, &len);
	game->img.collectible = mlx_xpm_file_to_image(game->mlx, BONE, &len, &len);
	game->img.on_box = mlx_xpm_file_to_image(game->mlx, IN_HOUSE, &len, &len);
}

void	put_map(int x, int y, char c, t_game *game)
{
	if (c == '1')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.wall, x * 64, y * 64);
	if (c == '0')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.floor, x * 64, y * 64);
	if (c == 'P')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.player, x * 64, y * 64);
	if (c == 'E')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.exit, x * 64, y * 64);
	if (c == 'C')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.collectible, x * 64, y * 64);
	if (c == 'B')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.on_box, x * 64, y * 64);
}

int	collectible_counter(t_game *game)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	y = 0;
	c = 0;
	while (x < game->line)
	{
		while (y < game->col)
		{
			if (game->map[x][y] == 'C')
			{
				c++;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (c);
}

void	player_position(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < game->line)
	{
		while (y < game->col)
		{
			if (game->map[x][y] == 'P')
			{
				game->player_x = y;
				game->player_y = x;
			}
			y++;
		}
		y = 0;
		x++;
	}
}

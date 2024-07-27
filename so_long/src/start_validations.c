/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:11:49 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 10:11:50 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	start_validations(t_game *game, int fd)
{
	ft_printf("Init validations...\n");
	check_map(game);
	valid_map(game);
	valid_path(game, fd);
}

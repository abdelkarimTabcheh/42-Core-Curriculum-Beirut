/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:58:45 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 13:58:47 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	if (count != 0 && (tot_size / count) != size)
		return (0);
	dst = malloc(size * count);
	if (!dst)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}

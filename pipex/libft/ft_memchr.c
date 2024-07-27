/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:24:15 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/12 18:22:04 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*p;

	ch = c;
	p = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
			return ((void *) s + i);
		i++;
	}
	return (0);
}

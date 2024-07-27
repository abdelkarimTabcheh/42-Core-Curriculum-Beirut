/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:11:05 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:24:10 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*s == chr)
			return (s);
		s++;
	}
	return (NULL);
}

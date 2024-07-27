/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:50:06 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/12 18:24:16 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && (i < n - 1))
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}

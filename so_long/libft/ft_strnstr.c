/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:17:37 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:17:44 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	j;

	a = 0;
	if ((n == 0 && !*s2) || !*s2)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	while (s1[a] != '\0' && a < n)
	{
		j = 0;
		while (s1[a + j] != '\0' && s2[j] != '\0'
			&& s1[a + j] == s2[j] && (a + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&(s1[a]));
			j++;
		}
		a++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:13:41 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/16 11:20:01 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static	size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	wlen;

	p = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!p || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s;
			p[i++] = ft_substr(s, 0, wlen);
			s += wlen;
		}
	}
	p[i] = NULL;
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:23:38 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:23:42 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' )
			j++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (j);
}

static char	*ft_wordcpy(const char *s, char c, char **strs)
{
	char	*next;

	next = ft_strchr(s, c);
	if (!next || !c)
	{
		next = (char *)s;
		while (*next)
			next++;
	}
	*strs = ft_substr(s, 0, next - s);
	return (next);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**buffer;

	if (!s)
		return (NULL);
	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(*strs));
	if (!strs)
		return (NULL);
	buffer = strs;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			s = ft_wordcpy(s, c, strs++);
	}
	*strs = 0;
	return (buffer);
}

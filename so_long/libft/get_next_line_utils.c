/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:19:42 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:19:58 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_chr(char *s1, int c)
{
	size_t	i;

	i = 0;
	if (!s1)
	{
		return (NULL);
	}
	if (c == '\0')
	{
		return ((char *)&s1[ft_len(s1)]);
	}
	while (s1[i] != c)
	{
		if (s1[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)s1 + i);
}

char	*ft_join(char *s, char *buff)
{
	size_t	i;
	size_t	j;
	char	*s2;

	if (!s)
	{
		s = (char *)malloc(1 * sizeof(char));
		s[0] = '\0';
	}
	if (!s || !buff)
		return (NULL);
	s2 = malloc(sizeof(char) * ((ft_len(s) + ft_len(buff)) + 1));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s)
		while (s[++i] != '\0')
			s2[i] = s[i];
	while (buff[j] != '\0')
		s2[i++] = buff[j++];
	s2[ft_len(s) + ft_len(buff)] = '\0';
	free(s);
	return (s2);
}

char	*ft_get_line(char *c)
{
	int		i;
	char	*src;

	i = 0;
	if (!c[i])
		return (NULL);
	while (c[i] && c[i] != '\n')
		i++;
	src = (char *)malloc((i + 2) * sizeof(char));
	if (!src)
		return (NULL);
	i = 0;
	while (c[i] && c[i] != '\n')
	{
		src[i] = c[i];
		i++;
	}
	if (c[i] == '\n')
	{
		src[i] = c[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

char	*ft_new_line(char *s)
{
	int			i;
	int			j;
	char		*src;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	src = (char *)malloc((ft_len(s) - i + 1) * sizeof(char));
	if (!src)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		src[j++] = s[i++];
	src[j] = '\0';
	free(s);
	return (src);
}

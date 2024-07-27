/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:20:10 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/11 17:40:26 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*p;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	p = (char *)s + start;
	if (ft_strlen(p) < len)
		i = ft_strlen(p) + 1;
	else
		i = len + 1;
	sub = (char *)malloc(i * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, p, i);
	return (sub);
}

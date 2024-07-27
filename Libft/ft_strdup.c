/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:36:49 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/13 11:57:21 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s) + 1;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i);
	return (p);
}

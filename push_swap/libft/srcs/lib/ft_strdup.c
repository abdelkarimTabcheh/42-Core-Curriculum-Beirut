/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:36:49 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/16 11:20:13 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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

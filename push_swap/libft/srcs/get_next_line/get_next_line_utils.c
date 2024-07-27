/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:53:14 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/16 14:50:38 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"
#include "../../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_start);
}

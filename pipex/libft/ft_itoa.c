/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:05:33 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/12 18:16:59 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_n_to_s(long n, char *s, size_t len)
{
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	len--;
	while (len)
	{
		s[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (s[0] != '-')
		s[0] = (n % 10) + '0';
	return (s);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*s;

	num = n;
	len = ft_itoa_len(num);
	s = 0;
	s = ft_n_to_s(num, s, len);
	if (!s)
		return (NULL);
	return (s);
}

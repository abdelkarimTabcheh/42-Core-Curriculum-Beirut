/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:11:57 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:12:01 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex(unsigned int n, int c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_hex(n / 16, c);
		count += ft_print_hex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar((n + '0'));
		else
		{
			if (c == 'x')
				count += ft_putchar((n - 10 + 'a'));
			if (c == 'X')
				count += ft_putchar((n - 10 + 'A'));
		}
	}
	return (count);
}

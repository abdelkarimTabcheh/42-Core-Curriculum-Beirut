/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:14:48 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/16 11:16:51 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	ft_conversion(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if ((c == 'i') || (c == 'd'))
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'x' || c == 'X')
		return (ft_putnbr_hexa(va_arg(args, unsigned int), c));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;
	int		check;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			check = ft_conversion(*(++str), args);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}

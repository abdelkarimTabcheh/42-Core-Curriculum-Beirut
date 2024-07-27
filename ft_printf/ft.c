/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:43:17 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/20 12:09:04 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:16:13 by atabcheh          #+#    #+#             */
/*   cdated: 2024/06/20 10:39:50 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	len = 0;
	while (*str)
	{
		if (write(1, str, 1) == -1)
			return (-1);
		len++;
		str++;
	}
	return (len);
}

int	ft_putnbr(long nb)
{
	long	num;
	int		len;
	int		tmp;

	len = 0;
	if (nb < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		len += 1;
		nb = -nb;
	}
	num = nb % 10 + '0';
	if (nb > 9)
	{
		tmp = ft_putnbr(nb / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (write(1, &num, 1) == -1)
		return (-1);
	len += 1;
	return (len);
}

int	ft_putnbr_hexa(unsigned long nb, char c)
{
	int		len;
	int		mod;
	char	*base;
	int		tmp;

	mod = 0;
	len = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb > 15)
	{
		tmp = ft_putnbr_hexa((nb / 16), c);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	mod = nb % 16;
	if (write(1, &base[mod], 1) == -1)
		return (-1);
	len += 1;
	return (len);
}

int	ft_putptr(void *ptr)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = 0;
	if (!ptr)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	len += 2;
	tmp = ft_putnbr_hexa((unsigned long)ptr, 'x');
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}

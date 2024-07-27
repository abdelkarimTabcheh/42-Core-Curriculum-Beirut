/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:04:36 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/20 10:46:44 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long nb);
int	ft_putnbr_hexa(unsigned long nb, char c);
int	ft_putptr(void *ptr);

#endif
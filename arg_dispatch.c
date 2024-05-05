/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_dispatch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:00:32 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/04 19:00:38 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	arg_dispatch(const char c, va_list args, int counter)
{
	void	*ptr;

	if (c == 'c')
		counter = ft_putchar(va_arg(args, int), counter);
	else if (c == 's')
		counter = ft_putstr(va_arg(args, char *), counter);
	else if (c == 'd')
		counter = ft_putnbr(va_arg(args, int), DEC_BASE, counter, 1);
	else if (c == 'i')
		counter = ft_putnbr(va_arg(args, int), DEC_BASE, counter, 1);
	else if (c == 'u')
		counter = ft_putnbr(va_arg(args, unsigned int), DEC_BASE, counter, 0);
	else if (c == 'x')
		counter = ft_putnbr(va_arg(args, int), HEX_BASE_LOW, counter, 1);
	else if (c == 'X')
		counter = ft_putnbr(va_arg(args, int), HEX_BASE_UPP, counter, 1);
	else if (c == 'p')
	{
		counter = ft_putstr("0x", counter);
		ptr = va_arg(args, void *);
		counter = ft_putptr((unsigned long long)ptr, HEX_BASE_LOW, counter);
	}
	else if (c == '%')
		counter = ft_putchar('%', counter);
	return (counter);
}

// int	ft_putptr(unsigned long long ptr, char *charset, int counter)
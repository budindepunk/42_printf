/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_dispatch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:00:32 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/06 15:54:25 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	arg_dispatch(const char c, va_list args, int count)
{
	void	*ptr;

	if (c == 'c')
		count = ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int), DEC_BASE, count, 1);
	else if (c == 'u')
		count = ft_putunbr(va_arg(args, unsigned int), DEC_BASE, count);
	else if (c == 'x')
		count = ft_putunbr(va_arg(args, unsigned int), HEX_BASE_LOW, count);
	else if (c == 'X')
		count = ft_putunbr(va_arg(args, unsigned int), HEX_BASE_UPP, count);
	else if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr != NULL)
			count = ft_putstr("0x", count);
		count = ft_putptr((unsigned long)ptr, HEX_BASE_LOW, count);
	}
	else if (c == '%')
		count = ft_putchar('%', count);
	return (count);
}

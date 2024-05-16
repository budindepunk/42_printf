/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:55:03 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/04 18:56:54 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		counter;
	int		i;

	if (!input)
		return (0);
	i = 0;
	counter = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1])
			{
				counter = arg_dispatch(input[i + 1], args, counter);
				i++;
			}
			else
				return (-1);
		}
		else
			counter = ft_putchar(input[i], counter);
		i++;
	}
	va_end(args);
	return (counter);
}
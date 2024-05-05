/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:43:45 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/05 13:43:46 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr(unsigned long long ptr, char *charset, int counter)
{
	unsigned long long		base;

	base = ft_strlen(charset);
	if (ptr <= base - 1)
		counter = ft_putchar(charset[ptr % base], counter);
	else
	{
		counter = ft_putptr(ptr / base, charset, counter);
		counter = ft_putchar(charset[ptr % base], counter);
	}
	return (counter);
}

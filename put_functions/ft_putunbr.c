/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:30 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/06 15:53:33 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, char *charset, int counter)
{
	unsigned int		base;

	base = ft_strlen(charset);
	if (n <= base - 1)
		counter = ft_putchar(charset[n % base], counter);
	else
	{
		counter = ft_putunbr(n / base, charset, counter);
		counter = ft_putchar(charset[n % base], counter);
	}
	return (counter);
}

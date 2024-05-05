/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:38:02 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/05 13:44:02 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n, char *charset, int counter, int sign_matters)
{
	long	ln;
	int		base;

	if (sign_matters == 0 && n < 0)
		ln = n * -1;
	else
		ln = n;
	base = ft_strlen(charset);
	if (ln < 0)
	{
		counter = ft_putchar('-', counter);
		ln *= -1;
	}
	if (ln <= base - 1)
		counter = ft_putchar(charset[ln % base], counter);
	else
	{
		counter = ft_putnbr(ln / base, charset, counter, 0);
		counter = ft_putchar(charset[ln % base], counter);
	}
	return (counter);
}

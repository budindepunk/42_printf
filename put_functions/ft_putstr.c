/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:39:34 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/05 12:39:35 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s, int counter)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		counter = ft_putchar(s[i], counter);
		i++;
	}
	return (counter);
}

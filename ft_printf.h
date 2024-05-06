/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:53:33 by csilva-r          #+#    #+#             */
/*   Updated: 2024/05/04 18:54:39 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_BASE_UPP "0123456789ABCDEF"
# define HEX_BASE_LOW "0123456789abcdef"
# define DEC_BASE "0123456789"

int		ft_printf(const char *input, ...);
int		arg_dispatch(const char c, va_list args, int counter);

size_t	ft_strlen(const char *s);
int		ft_putchar(char c, int counter);
int		ft_putnbr(int n, char *charset, int counter, int sign_matters);
int		ft_putstr(char *s, int counter);
int		ft_putptr(unsigned long long ptr, char *charset, int counter);
int	    ft_putunbr(unsigned int n, char *charset, int counter);

#endif

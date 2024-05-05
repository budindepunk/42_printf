#include "../ft_printf.h"

int	ft_putptr(unsigned long long ptr, char *charset, int counter)
{
	int		base;

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
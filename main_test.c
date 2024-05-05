#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int main(void)
{
/* ---- test putnbr ----
    ft_putnbr_base(255, DEC_BASE);
    ft_putchar_fd('\n', 1);

    ft_putnbr_base(255454656, HEX_BASE_LOW);
    ft_putchar_fd('\n', 1);

    ft_putnbr_base(255454656, HEX_BASE_UPP);
    ft_putchar_fd('\n', 1);
*/
/* ---- test counter ---- 
    int counter = 0;
    printf("counter before printing is %d\n", counter);
    printf("counter after printing is %d\n", ft_putnbr_base(786, DEC_BASE, counter));
*/
/* test for each type */
    // string
    char *string = "hola carola raton sin cola";
    printf("+++ s +++\n");
    printf(" || OG printf returned: %d\n", printf("%s", string));
    printf(" || MY printf returned: %d\n", ft_printf("%s", string));
    // char
    char charcito = 'g';
    printf("+++ c +++\n");
    printf(" || OG printf returned: %d\n", printf("%c", charcito));
    printf(" || MY printf returned: %d\n", ft_printf("%c", charcito));
    // int
    int i = 465;
    printf("+++ i +++\n");
    printf(" || OG printf returned: %d\n", printf("%i", i));
    printf(" || MY printf returned: %d\n", ft_printf("%i", i));
    // dec
    int d = -95;
    printf("+++ d +++\n");
    printf(" || OG printf returned: %d\n", printf("%d", d));
    printf(" || MY printf returned: %d\n", ft_printf("%d", d));
    // unsigned int
    unsigned int ui_pos = 95;
    printf("+++ u +++\n");
    printf(" || OG printf returned: %d\n", printf("%u", ui_pos));
    printf(" || MY printf returned: %d\n", ft_printf("%u", ui_pos));
    int ui_neg = -95;
    printf(" || OG printf returned: %d\n", printf("%u", ui_neg));
    printf(" || MY printf returned: %d\n", ft_printf("%u", ui_neg));
    // hex lower
    int hex = 1500;
    printf("+++ x +++\n");
    printf(" || OG printf returned: %d\n", printf("%x", hex));
    printf(" || MY printf returned: %d\n", ft_printf("%x", hex));
    // hex upper
    printf("+++ X +++\n");
    printf(" || OG printf returned: %d\n", printf("%X", hex));
    printf(" || MY printf returned: %d\n", ft_printf("%X", hex));
    // pointer
    printf("+++ p +++\n");
    printf(" || OG with p: %d\n", printf("%p", &hex));
    printf(" || MY with p: %d\n", ft_printf("%p", &hex));
    // %
    printf("+++ %% +++\n");
    printf(" || OG printf returned: %d\n", printf("%%"));
    printf(" || MY printf returned: %d\n", ft_printf("%%"));
    return(0);
}
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

    char *string = "holaholahola";
    char charcito = 'g';
    int i = 465;
    int d = -95;
    unsigned int ui_pos = 95;
    int ui_neg = -95;
    int hex = 1500;

    // string    
    printf("\n+++ s +++\n");
    printf(" || OG printf returned: %d\n", printf("%s", string));
    printf(" || MY printf returned: %d\n", ft_printf("%s", string));
    
    // char
    printf("\n+++ c +++\n");
    printf(" || OG printf returned: %d\n", printf("%c", charcito));
    printf(" || MY printf returned: %d\n", ft_printf("%c", charcito));
    
    // int
    printf("\n+++ i +++\n");
    printf(" || OG printf returned: %d\n", printf("%i", i));
    printf(" || MY printf returned: %d\n", ft_printf("%i", i));
    
    // dec
    printf("\n+++ d +++\n");
    printf(" || OG printf returned: %d\n", printf("%d", d));
    printf(" || MY printf returned: %d\n", ft_printf("%d", d));
    
    // unsigned int
    printf("\n+++ u +++\n");
    printf(" || OG printf returned: %d\n", printf("%u", ui_pos));
    printf(" || MY printf returned: %d\n", ft_printf("%u", ui_pos));
    printf(" || OG printf returned: %d\n", printf("%u", ui_neg));
    printf(" || MY printf returned: %d\n", ft_printf("%u", ui_neg));
    
    // hex lower
    printf("\n+++ x +++\n");
    printf(" || OG printf returned: %d\n", printf("%x", hex));
    printf(" || MY printf returned: %d\n", ft_printf("%x", hex));
    
    // hex upper
    printf("\n+++ X +++\n");
    printf(" || OG printf returned: %d\n", printf("%X", hex));
    printf(" || MY printf returned: %d\n", ft_printf("%X", hex));
    
    // pointer
    printf("\n+++ p +++\n");
    printf(" || OG with p: %d\n", printf("%p", &hex));
    printf(" || MY with p: %d\n", ft_printf("%p", &hex));
    
    // %
    printf("\n+++ %% +++\n");
    printf(" || OG printf returned: %d\n", printf("%%"));
    printf(" || MY printf returned: %d\n", ft_printf("%%"));
    
    // bunch of things at once
    printf("\n+++ bunch-o-things +++\n");
    printf(" || OG printf returned: %d\n", printf("hola esto es una string: %s y esto es un puntero: %p", string, &string));
    printf(" || MY printf returned: %d\n", ft_printf("hola esto es una string: %s y esto es un puntero: %p", string, &string));
    printf(" || OG printf returned: %d\n", printf("%s, %c, %d, %i, %x, %p", string, charcito, d, i, hex, &hex));
    printf(" || MY printf returned: %d\n", ft_printf("%s, %c, %d, %i, %x, %p", string, charcito, d, i, hex, &hex));

    // ??
    printf("\n+++ no arguments ?? undefined behavior +++\n");
    printf(" || OG printf returned: %d\n", ft_printf("esta es la fallida: %s"));
    
    return(0);
}
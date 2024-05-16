#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
int main(void)
{
/* test for each type */

    char *string = "holaholahola";
    char charcito = 'g';
    int i = INT_MIN;
    int d = INT_MAX;
    unsigned int ui_pos = 95;
    unsigned int ui_neg = -95;
    int hex = 1500;
    int hex_neg = -1500;

    // string    
    printf("\n\t+++ s +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%s", string));
    printf(" || MY printf returned: %d\n", ft_printf("\t%s", string));
    //printf(" || OG printf returned: %d\n", printf("\t%s", NULL)); // this one wont even compile haha
    printf(" || MY printf returned: %d\n", ft_printf("%s", NULL));

    // char
    printf("\n\t+++ c +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%c", charcito));
    printf(" || MY printf returned: %d\n", ft_printf("\t%c", charcito));
    
    // int && dec
    printf("\n\t+++ i +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%i and %d", INT_MIN, INT_MAX));
    printf(" || MY printf returned: %d\n", ft_printf("\t%i and %d", INT_MIN, INT_MAX));
    
    // unsigned int
    printf("\n\t+++ u +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%u", ui_pos));
    printf(" || MY printf returned: %d\n", ft_printf("\t%u", ui_pos));
    printf(" || OG printf returned: %d\n", printf("\t%u", ui_neg));
    printf(" || MY printf returned: %d\n", ft_printf("\t%u", ui_neg));
    
    // hex lower
    printf("\n\t+++ x and x neg+++\n");
    printf(" || OG printf returned: %d\n", printf("\t%x", hex));
    printf(" || MY printf returned: %d\n", ft_printf("\t%x", hex));
    printf(" || OG printf returned: %d\n", printf("\t%x", hex_neg));
    printf(" || MY printf returned: %d\n", ft_printf("\t%x", hex_neg));
    
    // hex upper
    printf("\n\t+++ X and X neg+++\n");
    printf(" || OG printf returned: %d\n", printf("\t%X", hex));
    printf(" || MY printf returned: %d\n", ft_printf("\t%X", hex));
    printf(" || OG printf returned: %d\n", printf("\t%X", hex_neg));
    printf(" || MY printf returned: %d\n", ft_printf("\t%X", hex_neg));
    
    // pointer
    printf("\n\t+++ p +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%p", &ui_neg));
    printf(" || MY printf returned: %d\n", ft_printf("\t%p", &ui_neg));
    printf(" || OG printf returned: %d\n", printf("\t%p", NULL));
    printf(" || MY printf returned: %d\n", ft_printf("\t%p", NULL));
    
    // %
    printf("\n\t+++ %% +++\n");
    printf(" || OG printf returned: %d\n", printf("\t%%"));
    printf(" || MY printf returned: %d\n", ft_printf("\t%%"));
    
    // bunch of things at once
    printf("\n\t+++ bunch-o-things +++\n");
    printf(" || OG printf returned: %d\n", printf("\thola esto es una string: %s y esto es un puntero: %p", string, &string));
    printf(" || MY printf returned: %d\n", ft_printf("\thola esto es una string: %s y esto es un puntero: %p", string, &string));
    printf(" || OG printf returned: %d\n", printf("\t%s, %c, %d, %i, %x, %p", string, charcito, d, i, hex, &hex));
    printf(" || MY printf returned: %d\n", ft_printf("\t%s, %c, %d, %i, %x, %p", string, charcito, d, i, hex, &hex));

    // ?? fringe cases
    printf("\n\t+++ 0 / null (nothing should happen here) +++\n");
    ft_printf(0);
    ft_printf(NULL);
    // no specifier
    printf("\n\t+++ no specifier +++\n");
    printf(" || MY printf returned: %d\n", ft_printf("%", string));
    printf(" || OG printf returned: %d\n", printf("%", string));
    // real printf won't compile in this case. mine throws segfault or prints random things
    printf("\n\t+++ no arguments ?? undefined behavior +++\n");
    printf(" || MY printf returned: %d\n", ft_printf("\testa es la fallida: %s"));

    return(0);
}

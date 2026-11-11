#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    // int a = 42;

    // int b = -42;

    // int *ptr = &a;

    // printf("\n========== CHARACTER TESTS ==========\n");

    // ft_printf("ft_printf: [%c]\n", 'A');

    // ft_printf("ft_printf: [%c]\n", 'z');

    // ft_printf("ft_printf: [%c]\n", 48);

    // ft_printf("ft_printf: [%c]\n", ' ');

    // ft_printf("ft_printf: [%c]\n", '\0');

    // ft_printf("ft_printf: [%c%c%c]\n", 'A', 'B', 'C');

    // printf("\n========== STRING TESTS ==========\n");

    // ft_printf("ft_printf: [%s]\n", "hello");

    // ft_printf("ft_printf: [%s]\n", "");

    // ft_printf("ft_printf: [%s]\n", "Hello World");

    // ft_printf("ft_printf: [%s]\n", NULL);

    // ft_printf("ft_printf: [%s %s]\n", "Hello", "World");

    // printf("\n========== POINTER TESTS ==========\n");

    // ft_printf("ft_printf: [%p]\n", &a);

    // ft_printf("ft_printf: [%p]\n", &b);

    // ft_printf("ft_printf: [%p]\n", ptr);

    // ft_printf("ft_printf: [%p]\n", NULL);

    // ft_printf("ft_printf: [%p %p]\n", &a, &b);

    // printf("\n========== DECIMAL TESTS ==========\n");

    // ft_printf("ft_printf: [%d]\n", 0);

    // ft_printf("ft_printf: [%d]\n", 42);

    // ft_printf("ft_printf: [%d]\n", -42);

    // ft_printf("ft_printf: [%d]\n", INT_MAX);

    // ft_printf("ft_printf: [%d]\n", INT_MIN);

    // ft_printf("ft_printf: [%i]\n", INT_MAX);

    // ft_printf("ft_printf: [%i]\n", INT_MIN);

    // printf("\n========== UNSIGNED TESTS ==========\n");

    // ft_printf("ft_printf: [%u]\n", 0);

    // ft_printf("ft_printf: [%u]\n", 42);

    // ft_printf("ft_printf: [%u]\n", UINT_MAX);

    // ft_printf("ft_printf: [%u %u]\n", 0, UINT_MAX);

    // printf("\n========== HEX TESTS ==========\n");

    // ft_printf("ft_printf: [%x]\n", 0);

    // ft_printf("ft_printf: [%x]\n", 10);

    // ft_printf("ft_printf: [%x]\n", 255);

    // ft_printf("ft_printf: [%x]\n", UINT_MAX);

    // ft_printf("ft_printf: [%X]\n", 255);

    // ft_printf("ft_printf: [%X]\n", UINT_MAX);

    // printf("\n========== PERCENT TESTS ==========\n");

    // ft_printf("ft_printf: [%%]\n");

    // ft_printf("ft_printf: [%%%%]\n");

    // ft_printf("ft_printf: [100%%]\n");

    // ft_printf("ft_printf: [Hello %% World]\n");

    // printf("\n========== MIXED TESTS ==========\n");

    // ft_printf("ft_printf: [%c %s %p %d %i %u %x %X %%]\n",'A', "Hello", &a, -42, 42, 100, 255, 255);

    // ft_printf("ft_printf: [%d%s%c%p%x]\n",INT_MIN, "hello", 'A', &a, UINT_MAX);

    // printf("\n========== RETURN VALUE TESTS ==========\n");

    // printf("ft_printf return: %d\n", ft_printf("hello"));

    // printf("ft_printf return: %d\n", ft_printf(""));

    // printf("ft_printf return: %d\n", ft_printf("%c", 'A'));

    // printf("ft_printf return: %d\n", ft_printf("%s", "hello"));

    // printf("ft_printf return: %d\n", ft_printf("%d", 42));

    // printf("ft_printf return: %d\n", ft_printf("%x", 255));

    // printf("ft_printf return: %d\n", ft_printf("100%%"));

    // printf("ft_printf return: %d\n", ft_printf("%c", '\0'));

    int a = 42;

ft_printf("%p\n", &a);

int i = ft_printf("%p\n", NULL);
ft_printf("%d\n", i);
ft_printf("%p %p\n", &a, NULL);

    return (0);
}


int c(char a, char c, ...);
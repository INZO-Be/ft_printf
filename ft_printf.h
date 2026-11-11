#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_print_hex(int c, unsigned int n);
int	ft_print_ptr(void *ptr);
int	ft_printunb(unsigned int n);
int	ft_printnb(int n);
int	ft_print_str(char *s);

#endif
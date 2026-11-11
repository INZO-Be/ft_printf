#include "ft_printf.h"

int	ft_print_hex(int c, unsigned int n)
{
	int		count;
	char	*base;
	int		ret;

	count = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ret = ft_print_hex(c, n / 16);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(base[n % 16]);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}

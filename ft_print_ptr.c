#include "ft_printf.h"

int	ft_print_hexptr(unsigned long ptr)
{
	int		count;
	int		ret;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
	{
		ret = ft_print_hexptr(ptr / 16);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(base[ptr % 16]);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int count;
	int ret;
	unsigned long nptr = (unsigned long)ptr;

	count = 0;
	if (!nptr)
	{
		ret = write(1, "0x0", 3);
		return (ret);
	}
	ret = write(1, "0x", 2);
	if (ret == -1)
		return (-1);
	count += ret;
	count += ft_print_hexptr(nptr);
	return (count);
}
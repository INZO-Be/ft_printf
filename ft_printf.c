#include "ft_printf.h"

int	ft_print_form(int i, va_list *args)
{
	int	count;

	count = 0;
	if (i == 'd' || i == 'i')
		count += ft_printnb(va_arg(*args, int));
	else if (i == 'u')
		count += ft_printunb(va_arg(*args, unsigned int));
	else if (i == 'x' || i == 'X')
		count += ft_print_hex(i, va_arg(*args, unsigned int));
	else if (i == 'p')
		count += ft_print_ptr(va_arg(*args, void *));
	else if (i == 's')
		count += ft_print_str(va_arg(*args, char *));
	else if (i == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (i == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_check_ret(const char *s, va_list *args, int i, int count)
{
	int	ret;

	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ret = ft_print_form(s[i], args);
			if (ret == -1)
				return (-1);
			count += ret;
		}
		else
		{
			ret = ft_putchar(s[i]);
			if (ret == -1)
				return (-1);
			count += ret;
		}
		i++;
	}
	return (count);
}
int	ft_printf(const char *s, ...)
{
	int i;
	int count;
	va_list l;

	i = 0;
	count = 0;
	if (!s)
		return (-1);
	va_start(l, s);
	count += ft_check_ret(s, &l, i, count);
	va_end(l);
	return (count);
}
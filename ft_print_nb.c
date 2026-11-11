#include "ft_printf.h"

int	ft_printnb(int n)
{
	long	nb;
	int		count;
	int		i;
	int		ret;
	char	buffer[12];

	i = 0;
	nb = n;
	count = 0;
	if (nb < 0)
	{
		ret = write(1, "-", 1);
		if (ret == -1)
			return (-1);
		nb = -nb;
		count += ret;
	}
	if (nb == 0)
	{
		ret = write(1, "0", 1);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		ret = write(1, &buffer[--i], 1);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	return (count);
}

int	ft_printunb(unsigned int n)
{
	unsigned long nb;
	int count;
	int ret;
	int i;
	char buffer[12];

	nb = (unsigned long)n;
	count = 0;
	ret = 0;
	i = 0;

	if (nb == 0)
	{
		ret = write(1, "0", 1);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		ret = write(1, &buffer[--i], 1);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	return (count);
}
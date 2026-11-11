#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;
	int	ret;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		ret = write(1, &s[i], 1);
		if (ret == -1)
			return (-1);
		i++;
	}
	return (i);
}

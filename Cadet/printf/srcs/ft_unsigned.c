#include "../includes/ft_printf.h"

void	ft_unsigned(unsigned int n, int *length)
{
	char	res;

	if (n >= 10)
		ft_unsigned(n / 10, length);
	res = (n % 10) + '0';
	*length += ft_putchar_fd(res, 1);
}

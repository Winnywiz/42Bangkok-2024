#include "../includes/ft_printf.h"

void	ft_int(int n, int *length)
{
	char	res;

	if (n == 2147483647)
	{
		*length += ft_putstr_fd("2147483647", 1);
		return ;
	}
	else if (n == -2147483648)
	{
		*length += ft_putstr_fd("-2147483648", 1);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		*length += ft_putchar_fd('-', 1);
	}
	if (n >= 10)
		ft_int(n / 10, length);
	res = (n % 10) + '0';
	*length += ft_putchar_fd(res, 1);
}

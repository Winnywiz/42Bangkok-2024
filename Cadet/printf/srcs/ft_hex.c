#include "../includes/ft_printf.h"

void	ft_hex(unsigned int n, char c, int *length)
{
	char	*hexl;
	char	*hexu;

	hexl = "0123456789abcdef";
	hexu = "0123456789ABCDEF";
	if (n >= 16)
		ft_hex(n / 16, c, length);
	if (c == 'X')
		*length += ft_putchar_fd(hexu[n % 16], 1);
	else if (c == 'x')
		*length += ft_putchar_fd(hexl[n % 16], 1);
}

static void	ft_hex_pointer(unsigned long n, int *length)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_hex_pointer(n / 16, length);
	*length += ft_putchar_fd(hex[n % 16], 1);
}

int	ft_pointer(unsigned long n)
{
	int	length;

	length = 0;
	if (n == 0)
	{
		length += ft_putstr_fd("(nil)", 1);
		return (length);
	}
	length += ft_putstr_fd("0x", 1);
	ft_hex_pointer(n, &length);
	return (length);
}

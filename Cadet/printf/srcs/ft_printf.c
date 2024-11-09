#include <stdarg.h>
#include "../includes/ft_printf.h"

int	ft_readstr(const char *str, va_list args)
{
	int	length;

	length = 0;
	if (*str == 'c')
		length += ft_putchar_fd(va_arg(args, int), 1);
	else if (*str == 's')
		length += ft_putstr_fd(va_arg(args, char *), 1);
	else if (*str == 'p')
		length += ft_pointer(va_arg(args, unsigned long));
	else if (*str == 'i' || *str == 'd')
		ft_int(va_arg(args, int), &length);
	else if (*str == 'u')
		ft_unsigned(va_arg(args, unsigned int), &length);
	else if (*str == 'x' || *str == 'X')
		ft_hex(va_arg(args, unsigned int), *str, &length);
	else if (*str == '%')
		length += ft_putchar_fd('%', 1);
	return (length);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			length += ft_readstr(s, args);
		}
		else
			length += ft_putchar_fd(*s, 1);
		s++;
	}
	va_end(args);
	return (length);
}

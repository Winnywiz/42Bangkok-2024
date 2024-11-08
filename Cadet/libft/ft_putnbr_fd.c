#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	res;

	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	res = (n % 10) + '0';
	write(fd, &res, 1);
}

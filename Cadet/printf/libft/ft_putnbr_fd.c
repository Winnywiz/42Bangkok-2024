/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:42:27 by skanin            #+#    #+#             */
/*   Updated: 2024/11/09 14:19:36 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:41:51 by skanin            #+#    #+#             */
/*   Updated: 2024/11/09 17:56:15 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

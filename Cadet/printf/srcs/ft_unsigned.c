/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:19:59 by skanin            #+#    #+#             */
/*   Updated: 2024/11/09 17:20:05 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_unsigned(unsigned int n, int *length)
{
	char	res;

	if (n >= 10)
		ft_unsigned(n / 10, length);
	res = (n % 10) + '0';
	*length += ft_putchar_fd(res, 1);
}

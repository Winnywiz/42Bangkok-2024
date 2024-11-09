/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:12:46 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/04 11:49:39 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		length++;
	if (n < 0)
	{
		n = -n;
		length++;
	}
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		length;
	char	*tmp;

	nb = n;
	length = ft_count_length(n);
	if (nb < 0)
		nb = -nb;
	tmp = (char *) ft_calloc(length + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	if (nb == 0)
		tmp[0] = '0';
	while (nb > 0)
	{
		tmp[length - 1] = (nb % 10) + '0';
		nb = nb / 10;
		length--;
	}
	if (n < 0)
		tmp[0] = '-';
	return (tmp);
}

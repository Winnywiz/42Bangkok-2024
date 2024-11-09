/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:57:16 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/03 19:39:01 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*_s;

	index = 0;
	_s = (unsigned char *) s;
	while (index < n)
		_s[index++] = 0;
}

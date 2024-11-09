/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:19:19 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/02 08:53:12 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*_dst;
	unsigned char	*_src;

	_dst = (unsigned char *) dst;
	_src = (unsigned char *) src;
	if (dst == (void *) 0 && src == (void *) 0)
		return (dst);
	while (n > 0)
	{
		*(_dst++) = *(_src++);
		n--;
	}
	return (dst);
}

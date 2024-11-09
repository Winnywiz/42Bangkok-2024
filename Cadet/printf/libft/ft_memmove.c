/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:19:26 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/02 16:28:45 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*_dst;
	unsigned char	*_src;

	index = 0;
	_dst = (unsigned char *) dst;
	_src = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (_dst > _src)
		while (len-- > 0)
			_dst[len] = _src[len];
	else
	{
		while (index < len)
		{
			_dst[index] = _src[index];
			index++;
		}
	}
	return (dst);
}

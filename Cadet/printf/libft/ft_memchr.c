/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:36:46 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/02 16:27:13 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*converted_s;

	uc = (unsigned char ) c;
	converted_s = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*converted_s == uc)
			return (converted_s);
		converted_s++;
	}
	return (NULL);
}

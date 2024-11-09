/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:30:01 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/05 13:00:34 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / count)
		return (NULL);
	tmp = (unsigned char *) malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return ((void *) tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:08:46 by skanin            #+#    #+#             */
/*   Updated: 2024/09/02 09:36:00 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		index;
	char	*new_ptr;

	new_ptr = (char *) malloc(ft_strlen(src) + 1);
	if (!new_ptr)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		new_ptr[index] = src[index];
		index++;
	}
	new_ptr[index] = '\0';
	return (new_ptr);
}

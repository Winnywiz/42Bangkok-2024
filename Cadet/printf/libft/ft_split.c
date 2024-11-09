/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:24:11 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/03 19:38:46 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_get_segment(char const *s, char c)
{
	size_t	index;
	size_t	segment;

	index = 0;
	segment = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			segment++;
		index++;
	}
	return (segment);
}

char	*ft_split_segment(char *ptr, char *end)
{
	char	*segment;
	size_t	length;

	if (end == NULL)
		length = ft_strlen(ptr);
	else
		length = (size_t)(end - ptr);
	segment = (char *) ft_calloc(length + 1, sizeof(char));
	if (!segment)
		return (NULL);
	if (length > 0)
		ft_memcpy(segment, ptr, length);
	else
	{
		free(segment);
		segment = NULL;
	}
	return (segment);
}

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	char	*end;
	char	**splitted;
	size_t	index;
	size_t	segment;

	if (!s)
		return (NULL);
	ptr = (char *) s;
	segment = ft_get_segment(s, c);
	splitted = (char **) ft_calloc((segment + 1), sizeof(char *));
	if (!splitted)
		return (NULL);
	index = 0;
	while (*ptr)
	{
		while (*ptr == c)
			ptr++;
		end = ft_strchr(ptr, c);
		splitted[index++] = ft_split_segment(ptr, end);
		if (end == NULL)
			break ;
		ptr = end;
	}
	return (splitted);
}

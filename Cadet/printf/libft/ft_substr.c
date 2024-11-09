/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:52:45 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/03 19:38:23 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*tmp;

	i = 0;
	if (!s)
		return (NULL);
	s_len = (size_t) ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	tmp = (char *) malloc(len + 1);
	if (!tmp)
		return (NULL);
	while (i < len)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}

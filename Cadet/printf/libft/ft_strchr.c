/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:16:08 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/02 16:28:32 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;

	i = 0;
	char_c = (char) c;
	if (char_c == '\0')
		return ((char *)&s[i] + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == char_c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

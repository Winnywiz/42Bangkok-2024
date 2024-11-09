/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:31:04 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/03 23:52:07 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;
	char			*found;

	char_c = (char) c;
	found = NULL;
	i = 0;
	if (char_c == '\0')
		return ((char *) &s[i] + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == char_c)
			found = (char *) &s[i];
		i++;
	}
	return (found);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winwinnys <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:14:15 by winwinnys         #+#    #+#             */
/*   Updated: 2024/09/03 15:31:43 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*tmp;
	unsigned int	s1_len;
	unsigned int	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = (unsigned int) ft_strlen(s1);
	s2_len = (unsigned int) ft_strlen(s2);
	tmp = (char *) ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1, s1_len);
	ft_memcpy(tmp + s1_len, s2, s2_len);
	return (tmp);
}

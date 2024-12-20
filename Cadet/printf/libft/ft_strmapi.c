/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:09:40 by skanin            #+#    #+#             */
/*   Updated: 2024/09/04 11:50:10 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	index;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	index = 0;
	s_len = (unsigned int) ft_strlen(s);
	tmp = (char *) ft_calloc(s_len + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	while (index < s_len)
	{
		tmp[index] = (*f)(index, s[index]);
		index++;
	}
	return (tmp);
}

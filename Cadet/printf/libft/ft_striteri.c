/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:29:07 by skanin            #+#    #+#             */
/*   Updated: 2024/09/04 11:49:55 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		(*f)(index, &s[index]);
		index++;
	}
}

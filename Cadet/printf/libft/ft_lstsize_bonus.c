/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42Bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:09:50 by skanin            #+#    #+#             */
/*   Updated: 2024/09/05 12:44:41 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	while (lst)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

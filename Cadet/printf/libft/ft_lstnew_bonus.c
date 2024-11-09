/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:03:44 by skanin            #+#    #+#             */
/*   Updated: 2024/09/04 18:37:01 by winwinnys        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *) malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}

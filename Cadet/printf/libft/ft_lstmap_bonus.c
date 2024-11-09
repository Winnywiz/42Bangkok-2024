/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <skanin@student.42Bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:54:24 by skanin            #+#    #+#             */
/*   Updated: 2024/09/06 21:55:43 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*obj;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		obj = ft_lstnew(f(lst->content));
		if (!obj)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, obj);
		lst = lst->next;
	}
	return (list);
}

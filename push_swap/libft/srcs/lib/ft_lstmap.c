/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:22:17 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/16 11:18:50 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current_node;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		current_node = ft_lstnew(f(lst->content));
		if (!current_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current_node);
		lst = lst->next;
	}
	return (new_list);
}

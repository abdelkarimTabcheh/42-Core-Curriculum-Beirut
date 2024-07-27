/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:42:41 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/20 15:43:50 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(lst);
	tmp->next = new;
}

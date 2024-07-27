/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:09:24 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:09:31 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*j;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		j = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = j;
	}
	*lst = 0;
}

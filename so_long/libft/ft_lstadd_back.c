/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:59:55 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:00:04 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*j;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	j = ft_lstlast(*lst);
	j->next = new;
}

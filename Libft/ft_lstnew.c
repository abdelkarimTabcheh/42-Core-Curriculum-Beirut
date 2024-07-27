/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:47:07 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/20 14:12:15 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	mylist;

	mylist = (t_list *)malloc(sizeof(*mylist));
	mylist->content = content;
	mylist->next = NULL;
	return (mylist);
}

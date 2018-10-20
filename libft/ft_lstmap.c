/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 16:14:40 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/19 00:16:23 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *newitem;
	t_list *currentitem;

	if (!lst || !f)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newitem = (*f)(lst);
		if (newlist)
		{
			currentitem->next = newitem;
			currentitem = currentitem->next;
		}
		else
		{
			newlist = newitem;
			currentitem = newlist;
		}
		lst = lst->next;
	}
	return (newlist);
}

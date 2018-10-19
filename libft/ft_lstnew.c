/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 15:25:19 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/17 23:31:20 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*listitem;

	if (!(listitem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		listitem->content = (void *)malloc(content_size);
		ft_memcpy(listitem->content, content, content_size);
		listitem->content_size = content_size;
	}
	else
	{
		listitem->content = NULL;
		listitem->content_size = 0;
	}
	listitem->next = NULL;
	return (listitem);
}

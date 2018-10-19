/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:14:29 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/12 15:24:23 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	*ptr;
	int		i;

	i = 0;
	ptr = (size_t *)malloc(sizeof(size_t) * size);
	if (ptr == NULL)
		return (NULL);
	while (size--)
	{
		*(ptr++) = 0;
		i++;
	}
	ptr -= i;
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:35:42 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:17:40 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*memsrc;
	char		*memdst;

	memsrc = (const char *)src;
	memdst = (char *)dst;
	if (memsrc > memdst)
		memdst = ft_memcpy(memdst, memsrc, len);
	else
	{
		while (len--)
			*(memdst + len) = *(memsrc + len);
	}
	return (dst);
}

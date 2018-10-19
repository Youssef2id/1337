/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:39:15 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/06 18:42:10 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	const char	*strsrc;

	strdst = (char*)dst;
	strsrc = (char*)src;
	while (n > 0)
	{
		*strdst = *strsrc;
		strdst++;
		strsrc++;
		n--;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:46:09 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:37:28 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int ldst;
	int lsrc;
	int lsize;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	lsize = (int)size;
	if (lsize <= ldst)
		return (lsrc + (int)size);
	while (*dst)
	{
		dst++;
		size--;
	}
	while (size - 1 && *src)
	{
		*(dst++) = *(src++);
		size--;
	}
	*dst = '\0';
	return (ldst + lsrc);
}

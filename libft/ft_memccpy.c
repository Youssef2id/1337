/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:16:49 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:16:09 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	letter;
	unsigned char	*fsrc;
	char			*fdst;

	fdst = (char*)dst;
	fsrc = (unsigned char*)src;
	letter = (unsigned char)c;
	while (n > 0)
	{
		if (*fsrc == letter)
		{
			*(fdst++) = *(fsrc++);
			return (fdst);
		}
		else
			*(fdst++) = *(fsrc++);
		n--;
	}
	return (NULL);
}

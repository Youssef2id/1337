/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:18:54 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:21:57 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (*str != letter)
			str++;
		else
			return (str);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:16:03 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:32:16 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int lenght;
	int flag;

	lenght = (int)len;
	i = 0;
	flag = 0;
	while (i < lenght)
	{
		if (src[i] != '\0' && flag == 0)
		{
			dst[i] = src[i];
		}
		else
		{
			flag = 1;
		}
		if (flag == 1)
			dst[i] = '\0';
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:39:35 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:41:20 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;
	int				index;
	int				i;

	index = -1;
	i = 0;
	ch = (unsigned char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == ch)
			index = i;
		str++;
		i++;
	}
	if (*str == '\0' && ch == '\0')
		return (str);
	if (index != -1)
		return ((str - i) + index);
	return (NULL);
}

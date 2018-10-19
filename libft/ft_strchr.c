/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:48:37 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/10 23:41:38 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	str = (char *)s;
	while (*str && *str != ch)
		str++;
	if (*str == ch)
		return (str);
	return (NULL);
}

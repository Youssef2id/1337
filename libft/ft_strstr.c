/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:30:18 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/11 17:49:45 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t			i;
	char			*str;
	char			*target;

	i = 0;
	str = (char *)haystack;
	target = (char *)needle;
	if (ft_strlen(needle) == 0)
		return (str);
	while (i <= ft_strlen(haystack))
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}

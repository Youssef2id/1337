/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:20:21 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/13 20:34:38 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		ptr = (char *)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (ptr == NULL)
			return (NULL);
		while (i < ft_strlen(s1) + ft_strlen(s2))
		{
			if (i < ft_strlen(s1))
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}

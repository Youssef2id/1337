/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:53:56 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/12 19:27:21 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = (*f)(str[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

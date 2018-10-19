/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:29:17 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/12 19:34:11 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		ptr[i] = (*f)(i, str[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:24:46 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/04 15:28:47 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *src)
{
	char *ptr;

	ptr = (char*)malloc((ft_strlen(src) + 1) * sizeof(char));
	ft_strcpy(ptr, src);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 18:46:59 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/19 18:48:10 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tempchar;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	len -= 1;
	j = len % 2;
	j = len - j;
	j = j / 2;
	i = 0;
	while (i <= j)
	{
		tempchar = str[i];
		str[i] = str[len - i];
		str[len - i] = tempchar;
		i++;
	}
	return (str);
}

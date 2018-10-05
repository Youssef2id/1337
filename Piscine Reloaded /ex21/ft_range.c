/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:29:24 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/04 15:32:26 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int i;
	int *ptr;

	i = 0;
	ptr = NULL;
	size = max - min;
	if (min >= max)
		return (ptr);
	ptr = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

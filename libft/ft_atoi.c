/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:56:10 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/12 13:08:44 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int pos;
	int multiplier;
	int total;

	pos = 0;
	multiplier = 1;
	total = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' ||
			*str == '\r' || *str == '\v')
		str++;
	if (str[0] == '-')
	{
		multiplier = -1;
		str++;
	}
	else if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + *str - '0';
		str++;
	}
	return (total * multiplier);
}

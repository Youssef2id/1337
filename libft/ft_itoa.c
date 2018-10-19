/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 16:23:02 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/15 16:24:27 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_digits(int nb)
{
	int				total;
	unsigned int	nbr;

	total = 0;
	if (nb < 0)
		nb *= -1;
	nbr = (unsigned int)nb;
	while (nbr >= 10)
	{
		nbr /= 10;
		total++;
	}
	total++;
	return (total);
}

char				*ft_itoa(int n)
{
	char			*number;
	int				i;
	unsigned int	nbr;
	int				digitscount;

	digitscount = ft_count_digits(n);
	if (n < 0)
		digitscount++;
	n = ft_abs(n);
	number = (char *)malloc(sizeof(char) * (digitscount + 1));
	if (number == NULL)
		return (NULL);
	number[0] = '-';
	nbr = (unsigned int)n;
	i = digitscount;
	number[i--] = '\0';
	while (nbr >= 10)
	{
		number[i--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	number[i] = '0' + nbr;
	return (number);
}

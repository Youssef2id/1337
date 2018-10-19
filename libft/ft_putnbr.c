/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 22:46:13 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/15 14:40:29 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	char			number[13];
	int				i;
	unsigned int	nbr;

	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	nbr = (unsigned int)n;
	i = 0;
	while (nbr >= 10)
	{
		number[i++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	number[i] = '0' + nbr;
	while (i >= 0)
		ft_putchar(number[i--]);
}

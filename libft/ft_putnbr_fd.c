/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:17:52 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/15 15:21:18 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char			number[13];
	int				i;
	unsigned int	nbr;

	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(number[i--], fd);
}

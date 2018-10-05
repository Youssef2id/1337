/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 12:49:52 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/04 12:50:26 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 23:35:45 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/03 23:37:03 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}

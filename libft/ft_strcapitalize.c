/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 18:57:46 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/19 18:59:30 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		i;
	int		cpt;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || cpt > 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			cpt = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && cpt == 0 && i != 0)
			str[i] = str[i] + 32;
		if ((str[i] < 'a' || str[i] > 'z') &&
				(str[i] < 'A' || str[i] > 'Z') &&
				(str[i] < '1' || str[i] > '9'))
			cpt++;
		else
			cpt = 0;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <salahyassine4@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 22:13:32 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/17 00:00:22 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *str, char del)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del && (str[i + 1] == '\0' || str[i + 1] == del))
			count++;
		i++;
	}
	return (count);
}

static char		**ft_allocate_str(char **array, char const *str, char del)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del)
		{
			count++;
			if (str[i + 1] == '\0' || str[i + 1] == del)
			{
				*array = (char *)malloc(sizeof(char) * (count + 1));
				array++;
				count = 0;
			}
		}
		i++;
	}
	return (array);
}

static char		**ft_fill_array(char **array, char const *str, char del)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del)
		{
			array[k][j] = str[i];
			j++;
			if (str[i + 1] == '\0' || str[i + 1] == del)
			{
				array[k][j] = '\0';
				k++;
				j = 0;
			}
		}
		i++;
	}
	array[k] = 0;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**wordsarray;
	int			i;

	if (!s)
		return (NULL);
	i = ft_count_words(s, c);
	wordsarray = (char **)malloc(sizeof(char *) * (i + 1));
	if (wordsarray == NULL)
		return (NULL);
	wordsarray = ft_allocate_str(wordsarray, s, c);
	wordsarray -= i;
	wordsarray = ft_fill_array(wordsarray, s, c);
	return (wordsarray);
}

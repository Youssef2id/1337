/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:03:30 by ysalahed          #+#    #+#             */
/*   Updated: 2018/10/05 15:08:02 by ysalahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *filename)
{
	int		fd;
	char	character;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &character, 1))
		write(1, &character, 1);
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}

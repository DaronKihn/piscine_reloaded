/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:16:51 by dkihn             #+#    #+#             */
/*   Updated: 2018/11/22 17:30:42 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buffer[1];

	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		else
			ft_putstr("File name missing.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buffer, 1) > 0)
		ft_putchar(buffer[0]);
	close(fd);
	return (0);
}

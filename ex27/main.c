/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:00:26 by eneto             #+#    #+#             */
/*   Updated: 2018/04/04 21:14:17 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "functions.h"

int		main(int argc, char **argv)
{
	int		file;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	file = open(argv[1], O_RDONLY | O_SYMLINK);
	if (file == -1)
		ft_putstr("open() error\n");
	display_content(file);
	if (close(file) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}

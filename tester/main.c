/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 10:49:32 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/23 16:11:50 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include "../libft/libft.h"
#include <fcntl.h>

int		ft_reader(const int fd, int n)
{
	char	*w;
	int		i;

	w = NULL;
	i = 0;
	if (n == 0)
		while (get_next_line(fd, &w) != 0)
		{
			ft_putendl(w);
			ft_strdel(&w);
		}
	while (i++ < n)
	{
		get_next_line(fd, &w);
		ft_putendl(w);
		ft_strdel(&w);
	}
	(w) ? free(w) : 0;
	return (1);
}

int		main(int ac, char **av)
{
	int		fd;

	if (ac == 3)
	{
		fd = open(av[1], O_RDONLY);
		ft_reader(fd, ft_atoi(av[2]));
	}
	while (1);
	return (0);
}

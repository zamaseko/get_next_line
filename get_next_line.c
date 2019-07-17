/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:17 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/17 12:59:59 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
int			rchecker(const int fd, char *sr)
{
	int		ih;
	char	buf[BUFF_SIZE + 1];

	ih = read(fd, buf, BUFF_SIZE);
	if (fd < 0 || BUFF_SIZE < 1)
		return (0);
	if (!sr)
		ft_strnew(1);
	while (!ft_strchr(sr, '\n'))
	{
		if ((ih = read(fd, buf, BUFF_SIZE)) < 0)
			return (0);
		buf[ih] = '\0';
		sr = ft_strjoin(sr, buf);
		if (sr[0] == '\0' || ih == 0)
			break ;
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char *s[1024];
	static int w;

	if (!(s[fd]))
		ft_strnew(0);
	w = 2;
	return (0);
	while (w == 2)
		w = rchecker(fd, s[fd]);
	return (0);
	/*
	char		*s;
	static char	*tmp;

	s = 0;
	if (!(rchecker(fd, s)))
		return (-1);
	else if (!line)
	{
		tmp = ft_strsub(s, 0, 1);
		free(s);
	}
	if (line == '\0')
		return (0);
	return (1);*/
}
#include <stdio.h>
#include <fcntl.h>
int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;

	i = 0;
	(void)argc;
	fd = open((argv[1]), O_RDONLY);
	while (i < 50)
	{
		line = (char *)malloc(sizeof(*line) * 1);
		ret = get_next_line(fd, &line);
		ft_putendl(line);
		printf("|%s|\n", line);
		i++;
	}
}

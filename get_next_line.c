/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:35:55 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/06 06:24:16 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//static int ft_holder(char **s, char **line, int fd)
/*{
	char *stmp;
	int i;

	i = 0;
	*line = ft_strsub(s[fd], 0, i);
	stmp = ft_strdup(s[fd] + i + 1);
	free(s[fd]);
	s[fd] = stmp;
	if (s[fd] == '\0')
		ft_strdel(&s[fd]);
	return (0);
}*/
// int	reader(i)
static int	getmealine(char **s, char **line, int fd)
{
	char *stmp;
	int		i;

	i = 0;
	{
		while (s[fd][i] != '\0' && s[fd][i] != '\n')
			i++;
		if (s[fd][i] == '\n')
		{
	//		ft_holder(&s[fd], line, fd);
			*line = ft_strsub(s[fd], 0, i);
			stmp =  ft_strdup(s[fd] + i + 1);
			free(s[fd]);
			s[fd] = stmp;
			if (s[fd] == '\0')
				ft_strdel(&s[fd]);
		}
		else if (s[fd] == '\0')
		ft_strdup(s[fd]);
		free(*s);
	}
	return (1);
}

int be_safe(const int fd, char *line)
{
	int checker;
	char buf[BUF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	if ((checker = (read(fd, buf, BUF_SIZE < 0))))
		return (-1);
}

int	get_next_line(const int fd, char **line)
{
	int checker;
	static char s[1024];
	char buf[BUF_SIZE + 1];
	char *tmps;

	checker = read(fd, buf, BUF_SIZE);
//	if (fd < 0 || !line)
//		return (-1);
//	if ((reader = (read(fd, buf, BUF_SIZE) < 0)))
//		return (-1);
	be_safe(fd, *line);
	while (buf[fd] == '\0')
	{
		if (s[fd] == 0)
		tmps = ft_strjoin(&s[fd], buf);
		free(&s[fd]);
		if (ft_strchr(&s[fd], '\n'))
			break ;
	}
	if (checker < 0)
		return (-1);
	else if (checker == 0 && s[fd] == 0 && s[fd] == '\0')
		return (0);
	return (getmealine(s, line, fd));
}
/*
#include <stdio.h>
#include <fcntl.h>
int			main()
{
	char	*line = NULL;
	int 	fd;
	int 	output;

	fd = open( "bible.txt", O_RDONLY);
	output = 1;
	while (output > 0)
	{
		output = get_next_line(fd, &line);
		printf("[%d] line: %s", output, line);
		ft_strdel(&line);
		line = NULL;
	}
	return (0);
}*/

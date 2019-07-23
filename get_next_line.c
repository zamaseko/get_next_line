/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:17 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/23 16:38:57 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				read_in(const int fd, char **rs)
{
	char		store[BUFF_SIZE + 1];
	long		t;
	char		*tmp;

	while (!(ft_strchr(rs[fd], '\n')))
	{
		if ((t = read(fd, store, BUFF_SIZE)) == 0)
			return (0);
		if (t < 0)
			return (-1);
		store[t] = '\0';
		tmp = rs[fd];
		rs[fd] = ft_strjoin(rs[fd], store);
		free(tmp);
		if (ft_strchr(rs[fd], '\n'))
			break ;
	}
	return (1);
}

int				in_line(const int fd, char **rs, char **line)
{
	int			i;
	char		*h;

	h = rs[fd];
	if (ft_strchr(rs[fd], '\n'))
	{
		i = ft_strchr(rs[fd], '\n') - rs[fd];
		*line = ft_strsub(rs[fd], 0, i);
		rs[fd] = ft_strsub(h, i + 1, ft_strlen(rs[fd]) - i);
		free(h);
		return (1);
	}
	else if (ft_strlen(rs[fd]) > 0)
	{
		i = ft_strchr(rs[fd], '\0') - rs[fd];
		*line = ft_strdup(h);
		rs[fd] = ft_strsub(h, i + 1, ft_strlen(rs[fd]) - i);
		free(h);
		free(rs[fd]);
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char *rs[1024];

	if (read(fd, NULL, 0) == -1)
		return (-1);
	if (fd < 0 || !line)
		return (-1);
	if (!rs[fd])
		rs[fd] = ft_strnew(0);
	if (read_in(fd, rs) < 0)
		return (-1);
	return (in_line(fd, rs, line));
}

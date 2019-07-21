/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:17 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/21 16:23:14 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				read_in(const int fd, char **rs, char **line)
{
	char		store[BUFF_SIZE + 1];
	long		t;
	char		*tmp;

	while (!ft_strchr(rs[fd], '\n'))
	{
		if ((t = read(fd, store, BUFF_SIZE)) == 0)
			return (0);
		if (t == -1)
			return (-1);
		store[t] = '\0';
		tmp = rs[fd];
		rs[fd] = ft_strjoin(rs[fd], store);
		free(tmp);
	}
	*line = ft_strsub(rs[fd], 0, ft_strchr(rs[fd], '\n') - rs[fd]);
	tmp = rs[fd];
	rs[fd] = ft_strsub(ft_strchr(rs[fd], '\n'), 1, ft_strchr(rs[fd], '\0') - \
			ft_strchr(rs[fd], '\n'));
	free(tmp);
	return (1);
}

/*int				in_line(char *s, char rs)
{
	char		*sub;
	int			i;

	i = 0;
	while (s[i])
		i++;
	{
		if (s[i] == rs)
		{
			sub = ft_strsub(s, 0, i);
			return (rs);
		}
	}
	return (0);
}*/

int				get_next_line(const int fd, char **line)
{
	static char *s[1024];

	if (!s[fd])
		s[fd] = ft_strnew(0);
//	s[fd] = in_line(s)
	read_in(fd, s, line);
	return (0);
}

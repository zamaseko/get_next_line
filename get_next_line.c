/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:35:55 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/05 16:21:31 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	getmealine(char **s, char **line, int fd)
{
	int		i;
	char	*stmp;
	
	i = 0;
	{
		while (s[fd][i] != '\0' && s[fd][i] != '\n')
			i++;
		if (s[fd][i] == '\n')
		{
			*line = ft_strsub(s[fd], 0, i);
			stmp = ft_strdup(s[fd] + i + 1);
			free(s[fd]);
			stmp = s[fd];
		}
		if (s[i] == '\0')
		ft_strdel(&s[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	int reader;
	static char *s[0];
	char buf[BUF_SIZE + 1];
	char *tmps;

	if (fd < 0 || !line)
		return (-1);
	while ((reader = (read(fd, buf, BUF_SIZE) < 0)))
		return (-1);
		while (buf[fd] == '\0')
		{
			if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
			tmps = ft_strjoin(s[fd], buf);
			free(s[fd]);
			if (ft_strchr(s[fd], '\n'))
				break ;
		}
		if (reader < 0)
			return (-1);
		else if (reader == 0 && s[fd] == NULL && s[fd] == '\0')
			return (0);
		return (getmealine(s, line, fd));
}

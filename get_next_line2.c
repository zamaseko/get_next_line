/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:25:53 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/08 12:01:56 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_the_line(char **s, char **line, int fd)
{
	int		ie;
	char	*stmp;

	ie = 0;
	while (s[fd][ie] != '\0' && s[fd][ie] != '\n')
		ie++;
	if (s[fd][ie] == '\n')
	{
		*line = ft_strsub(&s[fd][ie], 0, ie);
		stmp = ft_strdup(s[fd] + ie + 1);
		ft_strdel(s);
		stmp = &s[fd][ie];
	}
	else if ( s[fd][ie] == '\0' )
	{
		ft_strdup(&s[fd][ie]);
		free(*s);
	}
	return (1);
}
int	get_next_line(const int fd, char **line)
{
	char buf[BUF_SIZE + 1];
	char *tmps;
	int checker;
	static char *s[19941205];
	if (fd < 0 || !line)
		return (-1);
	if (!(checker = (read(fd, buf, BUF_SIZE))))
		return (-1);
	while (buf[fd] == '\0')
	{
		tmps = ft_strjoin(s[fd], buf);
	}
	if (checker < 0)
		return (-1);
	if (checker == 0 && s[fd] == NULL && s[fd] == '\0')
		return (0);
	return (get_the_line(s, line, fd));
}

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
}


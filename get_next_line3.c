/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:31:02 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/09 08:49:31 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			read_cache(const int fd, char *cache)
{
	char	*h;
	char	w[BUF_SIZE + 1];
	long	r;

	ft_memset(w, '\0', BUF_SIZE + 1);
	h = cache;
	r = read(fd, w, BUF_SIZE);
	cache = ft_strjoin(cache, w);
	ft_strdel(&h);
	if (r == -1 || r == 0)
		return ((r == -1) ? -1 : 0);
	else if (ft_strchr(w, '\n'))
		return (1);
	else
		return (2);
}

int			save_line(char *c, char **line)
{
	long	e;
	char	*h;

	h = c;
	e = ft_strchr(c, '\n') - c;
	if (ft_strchr(c, '\n'))
	{
		*line = ft_strsub(c, 0, e);
	}
	else
		*line = ft_strdup(c);
}

int				get_next_line(const int fd, char **line)
{
	static char	*c[1024];
	static int	e;

	if (!c[fd] ? ft_strnew(0) && e = 2: 0;
	(e == 1) ? e = 2 : 0;
	while (e == 2)
		e = read_cache(fd, c[fd]);
	(c[fd]) ? save_line(c[fd], line) : 0;
}

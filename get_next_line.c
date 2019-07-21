/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:17 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/21 14:39:53 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_in(const int fd, char **s)
{
	char	store[BUFF_SIZE + 1];
	long	t;
	char	tmp;

	while (!ft_strchr(s[fd], '\n'))
	{
		if ((t = read(fd, store, BUFF_SIZE)) == 0)
				return (0);
		if (t == -1)
				return (-1);
		store[t] = '\0';
		tmp = s[fd];
		s[fd] = ft_strjoin(s[fd], store);
		free(tmp);
	}
	return (1);
}

int		in_line(char *sub, char **line)
{
	char *ss;
	int i;

	i = 0;
	*line = ft_strsub(sub,)
}
int		get_next_line(const int fd, char **line)
{
	static char *s[1024];

	if (!s[fd])
		s[fd] = ft_strnew(0);
	read_in(fd, s);

}

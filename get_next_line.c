/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:10:17 by zamaseko          #+#    #+#             */
/*   Updated: 2019/07/16 12:46:31 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int			in_read(const int fd, char *sr)
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
			break;
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char *s[1024];

	if (fd < 0 || !line)
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 17:03:24 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/30 11:17:47 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_reader(char *s, char **line)
{
	int		i;
	char	*read;

	i = 0;
	{
		while (s[i] && s[i] != '\0' && s[i] != '\n')
			i++;
		if (s == '\n')
		{
			*line = ft_strnew(s, 0, i);
			read = ft_strdup(*s[i + 1]);
			*s = read;
			if (s[i] == '\0')	
				ft_strdel(s);
		}
		else 
			ft_strdel(s);
	}
	return (1);
}
int	get_next_line(const int fd, char **line)
{
}

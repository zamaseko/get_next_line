/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:51:32 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:06:19 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*find;
	char	look;

	i = 0;
	find = (char *)s;
	look = (char)c;
	while (i < n)
	{
		if (find[i] == look)
		{
			return (find + i);
		}
		i++;
	}
	return (NULL);
}

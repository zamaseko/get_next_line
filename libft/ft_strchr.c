/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:11:03 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:10:33 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	look;
	char	*find;

	i = 0;
	look = (char)c;
	find = (char *)s;
	while (s[i] && s[i] != look)
		i++;
	if (s[i] == look)
		return ((char *)s + i);
	return (NULL);
}

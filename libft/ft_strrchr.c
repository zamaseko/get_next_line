/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:13:14 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:23:14 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	look;
	char	*find;

	i = ft_strlen(s);
	look = (char)c;
	find = (char *)s;
	while (i > 0 && find[i] != look)
		i--;
	if (find[i] == look)
		return ((char *)find + i);
	return (NULL);
}

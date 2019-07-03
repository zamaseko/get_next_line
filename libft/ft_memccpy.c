/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:46:19 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/22 17:00:22 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == NULL && source == NULL)
		return (NULL);
	while (n > i)
	{
		if (source[i] == (unsigned char)c)
		{
			dest[i] = source[i];
			i++;
			return (dest + i);
		}
		dest[i] = source[i];
		i++;
	}
	return (NULL);
}

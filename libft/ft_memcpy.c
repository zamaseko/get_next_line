/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:47:24 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:07:42 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
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
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

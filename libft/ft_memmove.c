/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:49:04 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/21 18:10:58 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
		while (len--)
			dest[len] = source[len];
	else
		ft_memcpy(dest, source, len);
	return (dest);
}

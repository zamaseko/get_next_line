/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:07:51 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/22 17:00:48 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t l;

	i = ft_strlen(dst);
	j = ft_strlen(src) + i;
	l = 0;
	if (n < i)
		return (ft_strlen(src) + n);
	while (src[l] != '\0' && (i + 1 < n))
		dst[i++] = src[l++];
	dst[i] = '\0';
	return (j);
}

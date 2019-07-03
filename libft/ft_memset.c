/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:44:29 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:08:34 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*z;
	size_t			i;

	i = 0;
	z = (unsigned char *)b;
	while (len > 0)
	{
		z[i++] = c;
		len--;
	}
	return (b);
}

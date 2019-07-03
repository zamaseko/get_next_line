/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:33:16 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:17:57 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char *)ft_memalloc(size + 1);
	if (!s)
		return (NULL);
	ft_strclr(s);
	return (s);
}

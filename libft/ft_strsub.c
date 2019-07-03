/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:47:21 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/24 18:18:31 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fstr;

	i = 0;
	if (!s)
		return (NULL);
	fstr = ft_strnew(len);
	if (!fstr)
		return (NULL);
	while (i < len)
	{
		fstr[i] = s[start + i];
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}

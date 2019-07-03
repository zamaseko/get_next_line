/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:40:54 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:12:35 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*gstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	gstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!gstr)
		return (NULL);
	while (s[i] != '\0')
	{
		if (!(gstr[i] = f(s[i])))
			return (0);
		i++;
	}
	gstr[i] = '\0';
	return (gstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:51:21 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:05:17 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	long	tmp;
	char	*str;

	i = 0;
	tmp = (long)n;
	tmp = (tmp < 0) ? tmp * -1 : tmp;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	if (!(str = (n < 0) ? ft_strnew(++i) : ft_strnew(i)))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	tmp = (long)n;
	tmp = (tmp < 0) ? tmp * -1 : tmp;
	str = (n == 0) ? ft_strdup("0") : str;
	while (tmp > 0)
	{
		str[--i] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}

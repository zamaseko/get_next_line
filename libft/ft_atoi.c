/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/25 16:48:01 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	unsigned int	i;
	long			change;
	long			res;

	i = 0;
	change = 1;
	res = 0;
	i = ft_spaces(str, i);
	if (str[i] == '-')
	{
		change = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10 + str[i] - '0');
		i++;
		if (res > 2147483648 && change == -1)
			return (0);
		if (res < -2147483647 && change == 1)
			return (-1);
	}
	return (res * change);
}

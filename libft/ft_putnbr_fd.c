/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:57:42 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/11 16:24:27 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a *= -1;
	}
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	a = (a % 10) + '0';
	ft_putchar_fd(a, fd);
}

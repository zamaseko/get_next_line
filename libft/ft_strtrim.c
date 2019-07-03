/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:49:52 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/25 16:18:12 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	ws;
	size_t	bs;
	char	*ns;

	if (!s)
		return (NULL);
	ws = 0;
	bs = ft_strlen(s) - 1;
	while (ft_gap(s[ws]))
		ws++;
	if (ws == bs + 1)
		return (ft_strdup(""));
	while (ft_gap(s[bs]))
		bs--;
	ns = ft_strsub(s, ws, (bs - ws + 1));
	if (!ns)
		return (NULL);
	return (ns);
}

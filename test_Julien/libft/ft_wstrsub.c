/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:14:08 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/27 02:05:26 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wstrsub2(const wchar_t *ws, size_t i, size_t round)
{
	if (ws[i] < 128)
		++round;
	else if (ws[i] >= 128 && ws[i] < 2048)
		round += 2;
	else if (ws[i] >= 2048 && ws[i] < 65536)
		round += 3;
	else if (ws[i] >= 65536 && ws[i] <= 1114111)
		round += 4;
	return (round);
}

wchar_t			*ft_wstrsub(const wchar_t *ws, unsigned int start, size_t len)
{
	unsigned int	i;
	wchar_t			*cpy;
	size_t			round;
	size_t			tmpround;

	i = 0;
	round = 0;
	tmpround = 0;
	if (!(cpy = NULL) && (!ws || start > ft_wstrlenuni(ws)))
		return (NULL);
	while (ws[i] && round < len)
	{
		tmpround = round;
		round = ft_wstrsub2(ws, i, round);
		if (round == len)
			tmpround = round;
		++i;
	}
	if (!(round = 0) && !(cpy = ft_wstrnew(i)))
		return (NULL);
	i = 0;
	while (round < tmpround && (round = ft_wstrsub2(ws, i, round)))
		cpy[i++] = ws[start++];
	return (cpy);
}

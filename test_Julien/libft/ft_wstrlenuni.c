/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlenuni.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 00:40:36 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/26 23:52:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlenuni(const wchar_t *ws)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	while (ws[i])
	{
		if (ws[i] < 128)
			++ret;
		else if (ws[i] >= 128 && ws[i] < 2048)
			ret += 2;
		else if (ws[i] >= 2048 && ws[i] < 65536)
			ret += 3;
		else if (ws[i] >= 65536 && ws[i] <= 1114111)
			ret += 4;
		++i;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 04:55:51 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/18 15:26:27 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrdup(const wchar_t *ws)
{
	wchar_t		*dup;
	size_t		i;

	i = 0;
	if (!(dup = ft_wstrnew(ft_wstrlen(ws) + 1)))
		return (NULL);
	while (ws && ws[i])
	{
		dup[i] = ws[i];
		++i;
	}
	dup[i] = L'\0';
	return (dup);
}

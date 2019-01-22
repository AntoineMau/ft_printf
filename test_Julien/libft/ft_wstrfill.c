/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:01:48 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/18 05:04:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrfill(wchar_t *ws, wchar_t wc, size_t size)
{
	size_t		i;

	i = 0;
	while (ws && i < size)
		ws[i++] = wc;
	return (ws);
}

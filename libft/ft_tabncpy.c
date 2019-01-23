/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 03:37:31 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/01 03:57:28 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabncpy(int *dest, const int *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:00:09 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 15:14:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char*)(unsigned long)src)[i] != (char)c)
	{
		((char*)dest)[i] = ((char*)(unsigned long)src)[i];
		i++;
	}
	if (i < n && ((char*)(unsigned long)src)[i] == (char)c)
	{
		((char*)dest)[i] = ((char*)(unsigned long)src)[i];
		return (&((char*)dest)[i + 1]);
	}
	return (NULL);
}

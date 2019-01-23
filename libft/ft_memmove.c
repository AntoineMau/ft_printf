/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:40:58 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/15 16:17:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*result;

	result = dest;
	if ((((char*)dest >= (char*)(unsigned long)src + n)) ||
		(char*)dest <= (char*)(unsigned long)src)
	{
		while (n--)
		{
			*(char*)dest = *(char*)(unsigned long)src;
			dest = (char*)dest + 1;
			src = (char*)(unsigned long)src + 1;
		}
	}
	else
	{
		dest = (char*)dest + n - 1;
		src = (char*)(unsigned long)src + n - 1;
		while (n--)
		{
			*(char*)dest = *(char*)(unsigned long)src;
			dest = (char*)dest - 1;
			src = (char*)(unsigned long)src - 1;
		}
	}
	return (result);
}

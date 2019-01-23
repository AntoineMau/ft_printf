/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:16:37 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 15:48:12 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (--n && *(char*)(unsigned long)s1 == *(char*)(unsigned long)s2)
	{
		s1 = (char*)(unsigned long)s1 + 1;
		s2 = (char*)(unsigned long)s2 + 1;
	}
	return (*(unsigned char*)(unsigned long)s1 -
			*(unsigned char*)(unsigned long)s2);
}

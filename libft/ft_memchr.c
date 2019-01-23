/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:54:16 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 15:15:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*bus;

	i = 0;
	bus = NULL;
	while (i < n && ((unsigned char*)(unsigned long)s)[i] != (unsigned char)c)
		i++;
	if (i >= n)
		return (NULL);
	bus = &((char*)(unsigned long)s)[i];
	return ((void*)bus);
}

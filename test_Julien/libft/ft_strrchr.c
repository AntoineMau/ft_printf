/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:05:39 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/09 18:26:00 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	scpy = (char*)(unsigned long)s;
	while (*scpy)
		++scpy;
	while (scpy != s && *scpy != c)
		--scpy;
	if (*scpy == c)
		return (scpy);
	return (NULL);
}

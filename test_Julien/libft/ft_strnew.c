/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:49:56 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/28 12:10:24 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*str;

	i = 0;
	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}

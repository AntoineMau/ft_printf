/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:36:12 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 15:49:16 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccat(char *dest, const char *src, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && src[j] != c)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

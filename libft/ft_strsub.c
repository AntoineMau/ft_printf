/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:53:42 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 23:08:50 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (NULL);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	while (i < len)
		cpy[i++] = s[start++];
	return (cpy);
}

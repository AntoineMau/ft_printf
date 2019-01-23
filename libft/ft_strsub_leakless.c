/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 23:28:15 by mapandel          #+#    #+#             */
/*   Updated: 2017/03/27 23:29:36 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_leakless(char *s, unsigned int start, size_t len)
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
	ft_strdel(&s);
	return (cpy);
}

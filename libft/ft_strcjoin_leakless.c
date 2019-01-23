/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin_leakless.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:34:17 by mapandel          #+#    #+#             */
/*   Updated: 2017/02/24 16:08:41 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin_leakless(char *s1, char const *s2, char c)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len += ft_strclen(s2, c);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy(result, s1);
	result = ft_strccat(result, s2, c);
	ft_memdel((void**)&s1);
	return (result);
}

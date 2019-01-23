/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:25:29 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 12:37:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, char c)
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
	return (result);
}

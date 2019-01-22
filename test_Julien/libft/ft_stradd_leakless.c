/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 14:25:29 by mapandel          #+#    #+#             */
/*   Updated: 2017/02/24 16:07:08 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd_leakless(char *s1, char c)
{
	size_t		len;
	char		*result;

	len = 0;
	result = NULL;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	if (!(result = ft_strnew(len)))
		return (NULL);
	result = ft_strcpy(result, s1);
	result[len - 1] = c;
	ft_memdel((void**)&s1);
	return (result);
}

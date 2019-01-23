/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:33:25 by mapandel          #+#    #+#             */
/*   Updated: 2017/02/03 13:30:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd(char const *s1, char c)
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
	return (result);
}

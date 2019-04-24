/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:29:13 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:02:16 by anmauffr         ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 05:05:41 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/18 05:08:31 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2)
{
	size_t		len;
	wchar_t		*result;

	len = 0;
	result = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_wstrlen(s1);
	len += ft_wstrlen(s2);
	if (!(result = ft_wstrnew(len)))
		return (NULL);
	result = ft_wstrcpy(result, s1);
	result = ft_wstrcat(result, s2);
	return (result);
}

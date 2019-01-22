/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 01:01:12 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/01 01:29:04 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_tabcpy(int *dest, const int *src)
{
	size_t i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (dest);
}

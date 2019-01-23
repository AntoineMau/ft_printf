/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:13:19 by mapandel          #+#    #+#             */
/*   Updated: 2017/01/05 19:14:33 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strccmp(const char *s1, const char *s2, char c)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s1[i] != c)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

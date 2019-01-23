/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 02:23:19 by mapandel          #+#    #+#             */
/*   Updated: 2017/02/03 13:33:38 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s)
{
	char		*dup;
	char		tmp;
	size_t		start;
	size_t		end;

	dup = ft_strdup(s);
	start = 0;
	end = ft_strlen(dup) - 1;
	while (dup && dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	return (dup);
}

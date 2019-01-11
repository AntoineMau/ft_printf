/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:15:34 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:29:33 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_h(int champ, va_list ap, char k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if (k == 'd' || k == 'i')
	{
		if (!(str = ft_itoa_short(va_arg(ap, int), tmp)))
			return (FALSE);
		ft_putstr(str, -1, champ);
	}
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, int), -1, champ);
	else if (k == 'u')
	{
		if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int), tmp)))
			return (FALSE);
		ft_putstr(str, -1, champ);
		free(str);
	}
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, -1, champ);
	else
		return (FALSE);
	return (TRUE);
}

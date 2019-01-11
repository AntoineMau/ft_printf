/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:53:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:29:33 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_hh(int preci, int champ, va_list ap, char k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if (k == 'd' || k == 'i')
		ft_putstr(ft_itoa(va_arg(ap, int), str), preci, champ++);
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, int), -1, champ);
	else if (k == 'u')
	{
		tmp = NULL;
		if (!(str = ft_itoa_unsi(va_arg(ap, int), tmp)))
			return (FALSE);
		free(tmp);
		ft_putstr(str, -1, champ);
		free(str);
		str = NULL;
	}
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, unsigned int), k - 23, -1,
	champ);
	else
		return (FALSE);
	return (TRUE);
}

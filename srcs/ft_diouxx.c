/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diouxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:32:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 17:06:45 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

int		ft_diouxx(int champ, va_list ap, char k)
{
	if (k == 'd' || k == 'i')
		ft_d_i(ap, champ);
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, int), -1, champ);
	else if (k == 'u')
		ft_u(ap, champ);
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, -1, champ);
	else
		return (FALSE);
	return (TRUE);
}

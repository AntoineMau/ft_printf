/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:11 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:51:41 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

int		ft_hhll(int champ, va_list ap, char k)
{
	if (k == 'h')
		ft_hh(-1, champ, ap, k);
	else if (k == 'l')
		ft_ll(champ, ap, k);
	else
		return (FALSE);
	return (TRUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:34:04 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:38:47 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

int		ft_csp(int champ, va_list ap, char k)
{
	if (k == 'c')
		ft_c(champ, ap);
	else if (k == 's')
		ft_putstr(va_arg(ap, char *), -1, champ);
	else if (k == 'p')
		ft_x_p(va_arg(ap, int), champ);
	else
		return (FALSE);
	return (TRUE);
}

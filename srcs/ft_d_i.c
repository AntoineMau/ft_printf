/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:07:10 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 14:49:22 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_d_i(va_list ap, int champ)
{
	char	*tmpe;
	char	*stre;

	stre = NULL;
	tmpe = NULL;
	if (!(stre = ft_itoa(va_arg(ap, int), tmpe)))
		return ;
	ft_putstr(stre, -1, champ);
}

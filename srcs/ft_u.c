/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:41:53 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 14:48:28 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_u(va_list ap, int champ)
{
	char	*tmpe;
	char	*stre;

	stre = NULL;
	tmpe = NULL;
	if (!(stre = ft_itoa_unsi(va_arg(ap, unsigned int), tmpe)))
		return ;
	ft_putstr(stre, -1, champ);
	free(stre);
}

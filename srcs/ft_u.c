/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:41:53 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:36:37 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_u(va_list ap, __int32_t champ)
{
	char	*tmpe;
	char	*stre;

	stre = NULL;
	tmpe = NULL;
	if (!(stre = ft_itoa_unsi(va_arg(ap, __uint32_t), tmpe)))
		return ;
	ft_putstr(stre, -1, champ);
	free(stre);
}

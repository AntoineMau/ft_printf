/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:38:56 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 16:30:47 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

void	ft_c(__int32_t CHAMP, va_list ap)
{
	while (CHAMP-- - 1 > 0)
		ft_putchar(' ');
	ft_putchar(va_arg(ap, __int32_t));
}

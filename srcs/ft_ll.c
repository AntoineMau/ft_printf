/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:04:47 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 17:31:45 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void		ft_putnbr_long_unsi(__uint64_t nbr)
{
	nbr >= 10 ? ft_putnbr_long_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

__int32_t	ft_ll(__int32_t *tab, va_list ap, __int8_t k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	printf("Bonjour\n");
	printf("Bonjour\n");
	if (k == 'd' || k == 'i')
		ft_d_i_long(ap, tab);
	else if (k == 'o')
		ft_putoct_long(va_arg(ap, __int64_t), tab);
	else if (k == 'u')
		ft_u_long(ap, tab);
	else if (k == 'x' || k == 'X')
		ft_puthex_long(va_arg(ap, __int64_t), k - 23);
	else
		return (FALSE);
	return (TRUE);
}

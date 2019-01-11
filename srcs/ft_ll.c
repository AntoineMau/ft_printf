/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:04:47 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 18:14:37 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_putnbr_long_unsi(long long unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_long_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

int		ft_ll(int champ, va_list ap, char k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if (k == 'd' || k == 'i')
	{
		if (!(str = ft_itoa_long(va_arg(ap, __int64_t), tmp, 0)))
			return (FALSE);
		free(tmp);
		ft_putstr(str, -1, champ);
		free(str);
	}
	else if (k == 'o')
		ft_putoct_long(va_arg(ap, long long), -1, champ);
	else if (k == 'u')
		ft_putnbr_long_unsi(va_arg(ap, long long unsigned));
	else if (k == 'x' || k == 'X')
		ft_puthex_long(va_arg(ap, long long), k - 23);
	else
		return (FALSE);
	return (TRUE);
}

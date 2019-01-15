/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:07:20 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 10:36:50 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void	ft_putnbr_int(__int32_t nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", -1, 0);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_int(-nbr);
	}
	nbr >= 10 ? ft_putnbr_int(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_short(__int16_t nbr)
{
	if (nbr == -32768)
		ft_putstr("-32768", -1, 0);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_short(-nbr);
	}
	nbr >= 10 ? ft_putnbr_short(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_short_unsi(__uint16_t nbr)
{
	nbr >= 10 ? ft_putnbr_short_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_unsi(__uint32_t nbr)
{
	nbr >= 10 ? ft_putnbr_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

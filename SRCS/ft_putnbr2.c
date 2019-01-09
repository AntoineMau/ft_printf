/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:30:23 by judumay           #+#    #+#             */
/*   Updated: 2019/01/09 13:30:28 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void	ft_putnbr_int(int nbr)
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

void	ft_putnbr_short(short nbr)
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

void	ft_putnbr_short_unsi(short unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_short_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_unsi(unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_long_unsi(long long unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_long_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

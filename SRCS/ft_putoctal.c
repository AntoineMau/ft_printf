/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:29:47 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/17 13:48:07 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

char	*ft_putoct_int(unsigned int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}

int		ft_putoct_short(unsigned short int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}

int		ft_putoct_long(unsigned long int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}

int		ft_putoct_long_long(unsigned long long int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}

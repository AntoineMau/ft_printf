/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:29:47 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/10 18:08:39 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>
#include <string.h>

int		ft_putoct_int(unsigned int nb, int preci, int champ)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (9 + preci))))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	if (preci > ft_strlen(str))
	{
		preci = preci - ft_strlen(str);
		while (preci > 0)
		{
			str = ft_preci_int("0\0", str);
			preci--;
		}
	}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

int		ft_putoct_short(short unsigned int nb, int preci)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 7)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	while (preci-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), -1, 0);
	free(str);
	return (TRUE);
}

int		ft_putoct_long(__uint64_t nb, __int32_t preci, __int32_t champ)
{
	__uint8_t	i;
	char		*tmp;
	char		*str;

	tmp = NULL;
	if (!(str = (char*)malloc(sizeof(*str) * (21 + preci))))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i++] = nb % 8 + '0';
		nb /= 8;
	}
	str[i] = '\0';
	if (preci > ft_strlen(str))
	{
		preci = preci - ft_strlen(str);
		while (preci > 0 && preci--)
		{
			tmp = ft_preci_int("0\0", str);
			free(str);
			str = NULL;
			str = strdup(tmp);
			free(tmp);
			tmp = NULL;
		}
	}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

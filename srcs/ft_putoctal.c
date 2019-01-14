/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:07:51 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:35:48 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>
#include <string.h>

__int32_t	ft_putoct_int(__uint32_t nb, __int32_t preci, __int32_t champ)
{
	__int32_t	i;
	char		*tmp;
	char		*str;

	tmp = NULL;
	if (!(str = (char*)malloc(sizeof(*str) * (9 + preci))))
		return (FALSE);
	if ((i = 0) && nb == 0)
		str[i++] = '0';
	while (nb > 0 && (str[i++] = nb % 8 + '0'))
		nb /= 8;
	str[i] = '\0';
	if (preci > ft_strlen(str) && (preci = preci - ft_strlen(str)))
		while (preci > 0)
		{
			tmp = strdup(str);
			ft_memdel(str);
			str = ft_preci_int("0\0", tmp);
			ft_memdel(tmp);
			preci--;
		}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

__int32_t	ft_putoct_short(__uint16_t nb, __int32_t preci)
{
	__int32_t	i;
	char		*str;

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

__int32_t	ft_putoct_long(__uint64_t nb, __int32_t preci, __int32_t champ)
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
	while (nb > 0 && (str[i++] = nb % 8 + '0'))
		nb /= 8;
	str[i] = '\0';
	if (preci > ft_strlen(str) && (preci = preci - ft_strlen(str)))
		while (preci > 0 && preci--)
		{
			tmp = ft_preci_int("0\0", str);
			ft_memdel(str);
			str = strdup(tmp);
			ft_memdel(tmp);
		}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

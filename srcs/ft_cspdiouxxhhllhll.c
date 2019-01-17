/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cspdiouxxhhllhll.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:05:16 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 16:41:19 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

__int32_t	ft_atoi(const char *str)
{
	__uint8_t	i;
	__int32_t	nb;
	__uint8_t	neg;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	str[i] == '-' || str[i] == '+' ? i++ : i;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * neg);
}

__int32_t	ft_check_flag(const char *restrict format, __int32_t i,
__int32_t *tab, va_list ap)
{
	if (format[i] == '%' && i++)
	{
		while (format[i] == '+' && i++)
			tab[3] = 1;
		if (format[i] == '0' && (i++))
			tab[6] = 1;
		while (format[i] == ' ')
			i++;
		tab[5] = format[i - 1] == ' ' ? 1 : 0;
		if (format[i] == '-')
			i++;
		while (format[i] == '+' && i++)
			tab[3] = 1;
		CHAMP = format[i] >= '0' && format[i] <= '9' ? ft_atoi(&format[i]) : 1;
		while (format[i] >= '0' && format[i] <= '9')
			i++;
		i = ft_cspdiouxxhhllhll(tab, ap, format, i);
		if ((format[i] == 'h' && format[i + 1] == 'h') || (format[i] == 'l'
		&& format[i + 1] == 'l'))
			i += 2;
		else if ((format[i] == 'h' || format[i] == 'l' || format[i] == 'L')
		|| (format[i] == '.'))
			i++;
	}
	else
		ft_putchar(format[i]);
	return (i);
}

__int32_t	ft_cspdiouxxhhllhll(__int32_t *tab, va_list ap,
const char *restrict format, __int32_t i)
{
	/*int j;

	j = i - 1;
	while (format[++j])
	{
		if (format[j] == '%' && ft_check_p(format[j + 1]))
			tab[3] = 0;
		break ;
	}*/
	if (format[i] == '.' && i++)
		tab[6] = 0;
	tab[1] = -1;
	if (format[i] >= '0' && format[i] <= '9')
		tab[1] = ft_atoi(&format[i]);
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	if (format[i] == 'c' || format[i] == 's' || format[i] == 'p')
		ft_csp(tab, ap, format, i);
	else if (format[i] == 'd' || format[i] == 'i' || format[i] == 'o'
	|| format[i] == 'u' || format[i] == 'x' || format[i] == 'X')
		ft_diouxx(tab, ap, format, i);
	else if (format[i] == 'f')
		ft_putnbr_float1(va_arg(ap, double), tab);
	else if (format[i] == '%')
		ft_putstr("%", tab);
	else if (((format[i] == 'h' && format[i + 1] == 'h') ||
	(format[i] == 'l' && format[i + 1] == 'l')) && (i++))
		ft_hhll(tab, ap, format, i);
	else if ((format[i] == 'h' || format[i] == 'l'
	|| format[i] == 'L'))
		ft_lhl(tab, ap, format, i);
	else
		return (FALSE);
	return (i);
}

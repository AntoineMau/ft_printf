/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:42 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/11 17:59:32 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

char	*ft_itoa_float(long nb, char *str)
{
	int		i;
	int		neg;

	if (!(str = (char*)malloc(sizeof(*str) * 99)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

void	ft_memdel(char *str)
{
	free(str);
	str = NULL;
}

char	*ft_preci_int(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	if (!(new_str = (char*)malloc(sizeof(*new_str) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (FALSE);
	i = 0;
	if (s1[0] == '-' || s2[0] == '-')
		new_str[i++] = '-';
	j = (s2[0] == '-' ? 0 : -1);
	k = (s1[0] == '-' ? 0 : -1);
	while (s2[++j])
		new_str[i++] = s2[j];
	while (s1[++k])
		new_str[i++] = s1[k];
	new_str[i] = '\0';
	return (new_str);
}

int		ft_printf(const char *restrict format, ...)
{
	int		i;
	int		champ;
	va_list	ap;

	va_start(ap, format);
	i = -1;
	while (format[++i])
	{
		champ = 0;
		i = ft_check_flag(format, i, champ, ap);
	}
	va_end(ap);
	return (TRUE);
}

int		main(void)
{
	char	age;

	age = 98;
	printf("Vrai: J'ai %c ans\n", age);
	ft_printf("Mien: J'ai %c ans\n", age);
	return (0);
}

/***
	int / long : -2147483648 / 2147483647 | unsigned : 0 / 4294967295
	short : -32768 / 32767 | unsigned : 0 / 65535
	long long : 9223372036854775807 / -9223372036854775808 | unsigned : 0 / 18446744073709551615
***/

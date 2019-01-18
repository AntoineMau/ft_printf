/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 10:40:33 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/18 13:41:08 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		deb;
	int		fin;
	char	tmp;

	fin = 0;
	while (str[fin])
		fin++;
	deb = -1;
	while (++deb < --fin)
	{
		tmp = str[deb];
		str[deb] = str[fin];
		str[fin] = tmp;
	}
	return (str);
}

char	*ft_lltoa(long long int nbr)
{
	int		i;
	int		neg;
	char	*str;

	str = (char*)malloc(sizeof(*str) * 21);
	if (nbr == 0)
		return ("0\0");
	else if ((unsigned long long)nbr == 9223372036854775808UL)
		return ("-9223372036854775808");
	else if (nbr < 0 && ++neg)
		nbr = -nbr;
	i = 0;
	while (nbr > 0)
	{
		str[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[i++] = nbr % 10;
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

void	ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while(s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		printg(double nbr)
{
	int		i;
	int		count;
	char	*str;

	str = (char*)malloc(sizeof(*str) * 99);
	str[0] = '\0';
	count = 0;
	while (nbr > 92233720368547758 && ++count)
		nbr /= 10;
	printf("\n%f test\n", nbr);
	ft_strjoin(str, ft_lltoa((long long)nbr));
	nbr -= (long long int)nbr;
	while (--count > 0)
	{
		nbr *= 10;
		ft_strjoin(str, ft_lltoa((long long int)nbr));
		nbr -= (long long int)nbr;
	}
	ft_strjoin(str, ft_lltoa((long long int)nbr));
	i = ft_strlen(str);
	str[i] = '.';
	while (count++ < 6)
	{
		nbr *= 10;
		ft_strjoin(str, ft_lltoa((long long int)nbr));
		nbr -= (long long int)nbr;
	}
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

/*
**	llong : -9223372036854775808 / 9223372036854775807
**	unsigned llong : 0 / 18446744073709551615
*/

int		main(void)
{
	double	nbr;

	nbr = 9223372036854775808.123456;
	printf("%f\n", nbr);
	printg(nbr);
	return (0);
}

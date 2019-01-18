/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 10:40:33 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/18 15:02:03 by anmauffr         ###   ########.fr       */
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

long long	carre(int puiss)
{
	return (0);
}

int		printg(double nbr)
{
	int		i;
	int		count;
	char	*str;

	str = (char*)malloc(sizeof(*str) * 99);
	str[0] = '\0';
	count = 11;
	printf("nbr : %f origine nbr\n", nbr);
	//while (nbr > 922337203685477580 && ++count)
	nbr /= 10000000000;
	printf("nbr : %f 1\n", nbr);
	ft_strjoin(str, ft_lltoa((long long)nbr));
	//printf("nbr : %f\tstr: %s\n", nbr, str);
	nbr -= (long long int)nbr;
	printf("nbr : %f 2\n", nbr);
	//while (--count > 0)
	//{
		nbr *= 10000000000;
	printf("nbr : %f 3\n", nbr);
		ft_strjoin(str, ft_lltoa((long long int)nbr));
		nbr -= (long long int)nbr;
	printf("nbr : %f 4\n", nbr);
	//}
	ft_strjoin(str, ft_lltoa((long long int)nbr));
	i = ft_strlen(str);
	str[i] = '.';
	//while (count++ < 6)
	//{
	printf("nbr : %f 5\n", nbr);
		nbr *= 1000000;
	printf("nbr : %f 6\n", nbr);
		ft_strjoin(str, ft_lltoa((long long int)nbr));
		nbr -= (long long int)nbr;
	printf("nbr : %f 7\n", nbr);
	//}
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int		main(void)
{
	/*double	nbr;

	nbr = 123456789012345678901234567890.123456;
	//printf("%f\n", nbr);
	printg(nbr);*/

	int				i;
	unsigned int	a;
	unsigned int	som=1;
	unsigned int	resultat;
	int				machaine[32];
	unsigned int	tableau[32];
	unsigned int	*ptr_tmp = (unsigned int *)(&f);
	float			f = 9223372036854775808.123456;

	a = *ptr_tmp;
	i = 0;
	while(i < 32)
	{
		tableau[i++]=som;
		som=som*2;
	}
	i = 0;
	while(i <= 32)
	{
		resultat = a & tableau[i];
		if(resultat == tableau[i])
			machaine[i++] = 1;
		else
			machaine[i++] = 0;
	}
	fprintf(stdout,"nombre float en binaire est :");
	i = 31;
	while(i >= 0)
		fprintf(stdout,"%d",machaine[i--]);
	fprintf(stdout,"\n");
	fprintf(stdout,"nombre f : %f\n",f );
	fprintf(stdout,"nombre e : %e\n",f );
	fprintf(stdout,"nombre g : %g\n",f );
	return (0);
}

/*
** char : -127 / 126
** uchar : 0 / 255
**
** short : -32768 / 32767
** ushort : 0 / 65535
**
** int | long : -2147483648 / 2147483647
** uint | ulong : 0 / 4294967295
**
** llong : -9223372036854775808 / 9223372036854775807 19
** ullong : 0 / 18446744073709551615
*/

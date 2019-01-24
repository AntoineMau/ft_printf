#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * 101)))
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

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

char	*ft_itoa(int32_t nbr)
{
	int16_t	i;
	int16_t	neg;
	char	*str;

	if (!(str = (char*)malloc(sizeof(int8_t) * 12)))
		return (0);
	if (nbr == 2147483647)
		return (strdup("2147483647"));
	neg = 0;
	if (nbr < 0 && ++neg)
		nbr = -nbr;
	i = 0;
	while (nbr > 0)
	{
		str[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_dtoa(double nbr, int preci)
{
	int			i;
	long long	count;
	double		tmp;
	char		*str;

	if (!(str = (char*)malloc(sizeof(int8_t) * 101)))
		return (0);
	*str = '\0';
	while (nbr > 10)
	{
		count = 1;
		tmp = nbr;
		while (tmp > 2147483647)
		{
			tmp /= 10;
			count *= 10;
		}
		nbr /= count;
		str = ft_strjoin(str, ft_itoa((int32_t)nbr));
		nbr -= (int32_t)nbr;
		nbr *= count;
	}
	str = ft_strjoin(str, ft_itoa((int32_t)nbr));
	nbr -= (int32_t)nbr;
	i = 0;
	while (str[i])
		i++;
	str[i++] = '.';
	str[i] = '\0';
	nbr *= 1000000;
	str = ft_strjoin(str, ft_itoa((int32_t)nbr));
	return (str);
}

int32_t		main(void)
{
	double f;
	
	f = 21474836472147483647.123456;
	ft_dtoa(f, 10);
	return (0);
}

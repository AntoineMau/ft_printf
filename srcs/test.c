/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 08:52:11 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/14 11:55:11 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdio.h>
#include <stdlib.h>

void	test(double nb)
{
	int		i;
	int		count;
	char	*str;

	printf("nb depart: %.7f\n", nb);
	str = (char*)malloc(sizeof(*str) * 1000);
	i = 0;
	while (i < 999)
		str[i++] = '\0';
	count = 0;
	while (nb < -10 || nb > 10)
	{
		nb /= 10;
		count++;
	}
	str = ft_itoa((__int32_t)nb, str);
	i = ft_strlen(str);
	while (count-- > 0)
	{
		nb -= (__int8_t)nb;
		nb *= 10;
		str[i++] = (__int8_t)nb + '0';
	}
	str[i++] = '.';
	while(count++ < 6)
	{
		nb -= (__int8_t)nb;
		nb *= 10;
		str[i++] = (__int8_t)nb + '0';
	}
	str[i] = '\0';
	printf("nb arrive: %s\n", str);
}

/*__int32_t	main(void)
{
	test(12345678901234567890.123456789);
	printf("\n");
	test(12345678901234567890123879542316579874651357984123.123456789);
	printf("\n");
	test(12.123456);
	return (0);
}
*/

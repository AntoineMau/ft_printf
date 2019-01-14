/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 08:52:11 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/14 09:41:53 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdio.h>
#include <stdlib.h>

void	test(float nb)
{
	int		count;
	char	*str;

	printf("nb depart: %f\n", nb);
	str = (char*)malloc(sizeof(*str) * 12);
	count = 0;
	while (nb <= -2147483648 || nb >= 2147483647)
	{
		nb /= 10;
		count++;
	}
	printf("nb: %f\n", nb);
	str = ft_itoa(nb, str);
	printf("nb arrive: %s\n", str);
	while (count-- > 0)
	{
		nb *= 10;
		nb -= (int)nb;
		printf("%f\n", nb);
	}
}

__int32_t	main(void)
{
	test(12345678901234567890.123456789);
	return (0);
}

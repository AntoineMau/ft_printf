/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 22:20:25 by judumay           #+#    #+#             */
/*   Updated: 2019/01/25 00:06:31 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ftprintf.h"

int main()
{
    double          nb;
    nb = -12547.58;
    //nb = 0;
    //nb = 45.123456789;
    //nb = 2147483647;
    //nb = -8965421.12356432156;
    //nb = 1.0/0.0;
    //nb = -1.0/0.0;
    //nb = 0.0/0.0;
    //nb = -0.000;

    ft_printf("space:% f\n", nb);
    dprintf(2, "space:% f\n", nb);
    ft_printf("plus:%+f\n", nb);
    dprintf(2, "plus:%+f\n", nb);
    ft_printf("hash:%#f\n", nb);
    dprintf(2, "hash:%#f\n", nb);
    ft_printf("precision:%.2f\n", nb);
    dprintf(2, "precision:%.2f\n", nb);
    ft_printf("big prec:%.14f\n", nb);
    dprintf(2, "big prec:%.14f\n", nb);
    ft_printf("precision + hash:%#.0f\n", nb);
    dprintf(2, "precision + hash:%#.0f\n", nb);
    ft_printf("space + prec:% .5f\n", nb);
    dprintf(2, "space + prec:% .5f\n", nb);
    ft_printf("space + prec + hash:%# .0f\n", nb);
    dprintf(2, "space + prec + hash:%# .0f\n", nb);
    ft_printf("space + prec + hash:% #.0f\n", nb);
    dprintf(2, "space + prec + hash:% #.0f\n", nb);
    ft_printf("Plus + prec / grande:%+.5f\n", nb);
    dprintf(2, "Plus + prec / grande:%+.5f\n", nb);
    ft_printf("Plus + prec / petite:%+.0f\n", nb);
    dprintf(2, "Plus + prec / petite:%+.0f\n", nb);
    ft_printf("Plus + prec + hash:%#+.0f\n", nb);
    dprintf(2, "Plus + prec + hash:%#+.0f\n", nb);
    ft_printf("Prec + 0:%0.5f\n", nb);
    dprintf(2, "Prec + 0:%0.5f\n", nb);
    ft_printf("Prec + minus:%-.5f\n", nb);
    dprintf(2, "Prec + minus:%-.5f\n", nb);
    ft_printf("size:%5f\n", nb);
    dprintf(2, "size:%5f\n", nb);
    ft_printf("size + space:% 5f\n", nb);
    dprintf(2, "size + space:% 5f\n", nb);
    ft_printf("size + plus:%+5f\n", nb);
    dprintf(2, "size + plus:%+5f\n", nb);
    ft_printf("size + space:%# 5f\n", nb);
    dprintf(2, "size + space:%# 5f\n", nb);
    ft_printf("size + plus:%#+5f\n", nb);
    dprintf(2, "size + plus:%#+5f\n", nb);
    ft_printf("size + minus:%-5f\n", nb);
    dprintf(2, "size + minus:%-5f\n", nb);
    ft_printf("size + 0:%05f\n", nb);
    dprintf(2, "size + 0:%05f\n", nb);
    ft_printf("size + 0 + plus:%+05f\n", nb);
    dprintf(2, "size + 0 + plus:%+05f\n", nb);
    ft_printf("size + 0 + plus:%0+5f\n", nb);
    dprintf(2, "size + 0 + plus:%0+5f\n", nb);
    ft_printf("size + 0 + prec:%05.3f\n", nb);
    dprintf(2, "size + 0 + prec:%05.3f\n", nb);
    ft_printf("size + 0 + prec + hash:%0#5.0f\n", nb);
    dprintf(2, "size + 0 + prec + hash:%0#5.0f\n", nb);
    ft_printf("size + minus + prec:%-5.3f\n", nb);
    dprintf(2, "size + minus + prec:%-5.3f\n", nb);
    ft_printf("size + minus + prec + hash:%-#5.0f\n", nb);
    dprintf(2, "size + minus + prec + hash:%-#5.0f\n", nb);
    ft_printf("size + plus + 0 + prec:%+05.3f\n", nb);
    dprintf(2, "size + plus + 0 + prec:%+05.3f\n", nb);
    ft_printf("size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
    dprintf(2, "size + plus + 0 + prec + hash:%0+#5.0f\n", nb);
    ft_printf("size + espace + zero + prec:%0 5.3f\n", nb);
    dprintf(2, "size + espace + zero + prec:%0 5.3f\n", nb);
    ft_printf("size + espace + zero + prec:% 05.3f\n", nb);
    dprintf(2, "size + espace + zero + prec:% 05.3f\n", nb);
    ft_printf("size + espace + zero + prec + hash:%#0 6.0f\n", nb);
    dprintf(2, "size + espace + zero + prec + hash:%#0 6.0f\n", nb);
    ft_printf("size + minus + plus + prec:%-+5.3f\n", nb);
    dprintf(2, "size + minus + plus + prec:%-+5.3f\n", nb);
    ft_printf("size + minus + plus + prec + hash:%-#+5.0f\n", nb);
    dprintf(2, "size + minus + plus + prec + hash:%-#+5.0f\n", nb);
}
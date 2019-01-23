/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 01:07:14 by mapandel          #+#    #+#             */
/*   Updated: 2016/11/09 21:10:25 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *lst;
	t_list *nextlst;

	lst = *alst;
	while (lst != NULL)
	{
		nextlst = lst->next;
		ft_lstdelone(&lst, del);
		lst = nextlst;
	}
	*alst = NULL;
}

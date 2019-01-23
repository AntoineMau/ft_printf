/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:50:36 by mapandel          #+#    #+#             */
/*   Updated: 2016/12/26 14:31:43 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmpfirst;
	t_list *first;
	t_list *next;
	t_list *result;

	if (!lst || !f)
		return (NULL);
	result = f(lst);
	if (!(first = ft_lstnew(result->content, result->content_size)))
		return (NULL);
	tmpfirst = first;
	lst = lst->next;
	while (lst)
	{
		next = lst->next;
		result = f(lst);
		if (!(first->next = ft_lstnew(result->content, result->content_size)))
			return (NULL);
		first = first->next;
		lst = next;
	}
	return (tmpfirst);
}

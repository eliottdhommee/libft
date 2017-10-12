/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:44:02 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/12 16:03:24 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstinsert(t_list **lst, void *data, int (*cmp)(void*, void*))
{
	t_list		*prev;
	t_list		*tmp;

	tmp = *lst;
	prev = NULL;
	while (tmp && cmp(data, tmp->data) >= 0)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (!prev)
	{
		prev = ft_lstnew(data);
		prev->next = *lst;
		*lst = prev;
	}
	else
	{
		prev->next = ft_lstnew(data);
		prev->next->next = tmp;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:54:55 by edhommee          #+#    #+#             */
/*   Updated: 2017/12/13 17:57:25 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <liblst.h>

int		ft_lstfindi(t_list *begin, void *dataref, int (*cmp)(void*, void*))
{
	t_list		*list;
	int			i;

	i = 0;
	list = begin;
	while (list && cmp(dataref, list->data) != 0)
	{
		list = list->next;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 16:05:54 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/13 15:02:20 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstfind(t_list *begin, void *dataref, int (*cmp)(void*,void*))
{
	t_list		*list;

	list = begin;
	while (list && cmp(dataref, list->data) != 0)
		list = list->next;
	return (list);
}

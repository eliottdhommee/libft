/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:08:05 by edhommee          #+#    #+#             */
/*   Updated: 2017/12/08 16:42:12 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <liblst.h>

t_list		*ft_lstlast(t_list *begin_list)
{
	t_list		*list;

	list = begin_list;
	while (list)
	{
		if (list->next == NULL)
			return (list);
		list = list->next;
	}
	return (NULL);
}

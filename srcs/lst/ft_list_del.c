/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:54:49 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 15:05:47 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_list_del(t_list **begin_list, void (*del_item)(void*))
{
	t_list		*tmp;
	t_list		*nxt;

	tmp = *begin_list;
	while (tmp)
	{
		nxt = tmp->next;
		del_item(tmp->data);
		ft_memdel((void*)&tmp);
		tmp = nxt;
	}
	*begin_list = NULL;
}

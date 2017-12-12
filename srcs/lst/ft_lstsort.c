/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:32:58 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/12 15:40:16 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <liblst.h>

void		ft_lstsort(t_list **lst, int (*cmp)(void*, void*))
{
	t_list		*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (cmp(tmp->data, tmp->next->data))
		{
			ft_swap_star(&(tmp->data), &(tmp->next->data));
			tmp = *lst;
		}
		else
			tmp = tmp->next;
	}
}

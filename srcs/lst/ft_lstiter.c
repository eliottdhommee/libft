/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:48:16 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/12 14:36:19 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstiter(t_list *begin_list, void (*f)(t_list *elem))
{
	while (begin_list)
	{
		(*f)(begin_list);
		begin_list = begin_list->next;
	}
}

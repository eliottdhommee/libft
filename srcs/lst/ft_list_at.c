/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:07:10 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/13 14:57:20 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nb)
{
	t_list		*list;

	list = begin_list;
	while (list && --nb)
		list = list->next;
	return (list);
}

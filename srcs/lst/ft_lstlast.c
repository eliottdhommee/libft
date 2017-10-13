/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:08:05 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/13 14:59:50 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_list_last(t_list *begin_list)
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

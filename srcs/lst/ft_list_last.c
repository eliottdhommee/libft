/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:08:05 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 14:10:38 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_list_last(t_list *begin_list)
{
	while (begin_list)
	{
		if (begin_list->next == NULL)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}

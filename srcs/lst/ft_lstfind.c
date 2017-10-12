/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 16:05:54 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/12 16:08:39 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstfind(t_list *begin, void *dataref, int (*cmp)(void*,void*))
{
	while (begin && cmp(dataref, begin->data) != 0)
		begin = begin->next;
	return (begin);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:07:10 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 15:13:40 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nb)
{
	while (begin_list && --nb)
		begin_list = begin_list->next;
	return (begin_list);
}

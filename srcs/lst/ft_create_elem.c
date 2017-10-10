/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 13:37:35 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 17:05:06 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*new;

	if (!(new = (t_list*)ft_memalloc(sizeof(t_list*))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

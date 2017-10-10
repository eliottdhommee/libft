/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_param.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:17:20 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 17:03:14 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_tab_to_list(char **tab)
{
	t_list		*new_list;
	int			i;

	i = 0;
	new_list = NULL;
	while (tab[i])
	{
		ft_list_push_back(&new_list, (void*)ft_strdup(tab[i]));
		i++;
	}
	return (new_list);
}

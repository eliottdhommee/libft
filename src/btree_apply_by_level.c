/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:14:46 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/15 14:10:26 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		btree_apply_one_level()
{

}

void			btree_apply_by_level(t_btree *root, void (*applyf)
					(void *item, int current_level, int is_first_elem))
{
	int		i;

	i = 0;
	while (i <= btree_level_count(root))
	{
		btree_apply_one_level();
		i++;
	}
}
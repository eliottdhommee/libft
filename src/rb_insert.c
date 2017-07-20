/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:12:45 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/20 15:51:05 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		rb_insert(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		(*root)->color = RB_RED;
	}
	else
	{
		if ((*cmpf)((*root)->item, item) > 0)
		{
			rb_insert(&(*root)->left, item, (*cmpf));
			(*root)->left->parent = (*root);
			if ((*root)->left->color == RB_RED && (*root)->color == RB_RED)
				check_and_rotate(&(*root)->left);
		}
		else
		{
			rb_insert(&(*root)->right, item, (*cmpf));
			(*root)->right->parent = (*root);
			if ((*root)->right->color == RB_RED && (*root)->color == RB_RED)
				check_and_rotate(&(*root)->right);
		}
	}
}

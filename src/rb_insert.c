/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:12:45 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/20 11:34:35 by edhommee         ###   ########.fr       */
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
	if ((*cmpf)(item, (*root)->item) > 0)
	{
		rb_insert(&(*root)->left, item, (*cmpf));
		if ((*root)->left && !(*root)->left->parent)
			(*root)->left->parent = (*root);
		if ((*root)->left->color == RB_RED && (*root)->color == RB_RED)
			check_and_rotate(&(*root)->left);
	}
	else if ((*cmpf)(item, (*root)->item) <= 0)
	{
		rb_insert(&(*root)->right, item, (*cmpf));
		if ((*root)->right && !(*root)->right->parent)
			(*root)->right->parent = (*root);
		if ((*root)->right->color == RB_RED && (*root)->color == RB_RED)
			check_and_rotate(&(*root)->right);
	}
}

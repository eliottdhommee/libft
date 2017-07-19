/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:18:39 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/19 16:45:25 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		rb_left_rotate(t_btree **node)
{
	t_btree		*tmp;

	tmp = (*node)->left;
	(*node)->left = tmp->right;
	tmp->right->parent = *node;
	tmp->right = *node;
	(*node)->parent = tmp;
}

void		rb_right_rotate(t_btree **node)
{
	t_btree		*tmp;

	tmp = (*node)->right;
	(*node)->right = tmp->left;
	tmp->left->parent = *node;
	tmp->left = *node;
	(*node)->parent = tmp;
}

void		check_and_rotate(t_btree **root)
{
	if (!papy(*root))
		(*root)->parent->color = RB_BLACK;
	else if (tonton(*root)->color == RB_RED)
	{
		(*root)->parent->color = RB_BLACK;
		tonton(*root)->color = RB_BLACK;
		papy(*root)->color = RB_RED;
	}
	else if (tonton(*root)->color == RB_BLACK)
	{
		if ((*root) == (*root)->parent->left)
		{
			rb_right_rotate(&(*root)->parent);
			(*root)->parent->color = RB_BLACK;
			(*root)->parent->right->color = RB_RED;
		}
		else
		{
			rb_left_rotate(&(*root));
			rb_right_rotate(&(*root)->parent);
			(*root)->parent->color = RB_BLACK;
			(*root)->parent->right->color = RB_RED;
		}
	}
}

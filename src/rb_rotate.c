/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:18:39 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/20 16:43:03 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		rb_left_rotate(t_btree **node)
{
	t_btree		*gpl;
	t_btree		*nl;

	gpl = papy(*node)->left;
	nl = (*node)->left;
	papy(*node)->left = *node;
	(*node)->left = gpl;
	if (gpl)
		gpl->right = nl;
}

void		rb_right_rotate(t_btree **node)
{
	t_btree		*pgr;
	t_btree		*rn;

	pgr = NULL;
	if(papy(*node) && papy(*node)->right)
		pgr = papy(*node)->right;
	rn = (*node)->right;
	if(papy(*node))
		papy(*node)->right = *node;
	(*node)->right = pgr;
	if (pgr)
		pgr->left =rn;
}

void		check_and_rotate(t_btree **root)
{
	if (!papy(*root))
		(*root)->parent->color = RB_BLACK;
	else if (tonton(*root) && (tonton(*root))->color == RB_RED)
	{
		(*root)->parent->color = RB_BLACK;
		tonton(*root)->color = RB_BLACK;
		papy(*root)->color = RB_RED;
	}
	else if (!tonton(*root) || (tonton(*root))->color == RB_BLACK)
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

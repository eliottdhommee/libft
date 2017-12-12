/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:57:53 by edhommee          #+#    #+#             */
/*   Updated: 2017/09/20 13:52:49 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libbtree.h>

void		btree_delete(t_btree *root, void (*del_item)(void*))
{
	if (root)
	{
		btree_delete(root->left, del_item);
		btree_delete(root->right, del_item);
		del_item((root->item));
		ft_memdel((void*)&root);
	}
}

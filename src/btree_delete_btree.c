/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_delete_btree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:25:11 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/15 13:28:03 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		btree_delete_btree(t_btree *root)
{
	if (root)
	{
		btree_delete_btree(root->left);
		free(root);
		btree_delete_btree(root->right);
	}
}

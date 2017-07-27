/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:57:53 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/27 16:05:32 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		btree_delete(t_btree *root)
{
	if (root)
	{
		btree_delete(root->left);
		ft_memdel((void*)&root->item);
		btree_delete(root->right);
	}
}

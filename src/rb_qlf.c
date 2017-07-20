/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qlf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:58:22 by edhommee          #+#    #+#             */
/*   Updated: 2017/07/19 16:45:29 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_btree		*papy(t_btree *node)
{
	if (node != NULL && node->parent != NULL)
		return (node->parent->parent);
	else
		return (NULL);
}

t_btree		*tonton(t_btree *node)
{
	t_btree *grandparent;

	grandparent = papy(node);
	if (!grandparent)
		return (NULL);
	if (node->parent == grandparent->left)
		return (grandparent->right);
	else
		return (grandparent->left);
}

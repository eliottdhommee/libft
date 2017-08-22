/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:35:08 by edhommee          #+#    #+#             */
/*   Updated: 2017/08/22 14:52:51 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_tabdup(char **tab)
{
	int		i;
	char	**dup;

	i = 0;
	while (tab[i])
		++i;
	dup = ft_memalloc(sizeof(char *) * (i + 1));
	dup[i] = NULL;
	while (--i >= 0)
		dup[i] = ft_strdup(tab[i]);
	return (dup);
}

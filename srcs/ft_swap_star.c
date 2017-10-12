/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_star.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:32:58 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 17:19:52 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_swap_star(void **one, void **two)
{
	void	*tmp;

	tmp = NULL;
	tmp = *one;
	*one = *two;
	*two = tmp;
}
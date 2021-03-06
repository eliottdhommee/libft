/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:33:55 by edhommee          #+#    #+#             */
/*   Updated: 2017/05/20 17:26:15 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if ((s != NULL) && (f != NULL))
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}

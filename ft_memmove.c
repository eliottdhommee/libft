/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:35:12 by edhommee          #+#    #+#             */
/*   Updated: 2016/11/07 14:21:37 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temps_dest;
	char	*temps_src;
	size_t	i;

	i = 0;
	temps_dest = (char *)dst;
	temps_src = (char *)src;
	if (temps_dest > temps_src)
	{
		while (n >= i)
		{
			temps_dest[n - i] = temps_src[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			temps_dest[i] = temps_src[i];
			i++;
		}
	}
	return (dst);
}

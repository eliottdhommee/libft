/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:34:47 by edhommee          #+#    #+#             */
/*   Updated: 2016/11/07 09:34:48 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	fin;
	size_t	i;

	i = 0;
	while ((dst[i] != '\0') && (i < size))
		i++;
	fin = i;
	while ((src[i - fin] != '\0') && (i < size - 1))
	{
		dst[i] = src[i - fin];
		i++;
	}
	if (fin < size)
		dst[i] = '\0';
	return (fin + ft_strlen(src));
}

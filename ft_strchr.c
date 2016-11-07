/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:31:16 by edhommee          #+#    #+#             */
/*   Updated: 2016/11/07 09:31:17 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	mark;

	mark = (char)c;
	while ((*s != mark) && (*s != '\0'))
		s++;
	if (*s == mark)
		return ((char *)s);
	return (NULL);
}

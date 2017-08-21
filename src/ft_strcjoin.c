/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:36:29 by edhommee          #+#    #+#             */
/*   Updated: 2017/08/21 17:48:50 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	char	*res;
	int		size;

	if (!(s1 && s2))
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(res = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	size = 0;
	while (s1[size])
		++size;
	ft_strcpy(res, (char*)s1);
	res[size] = c;
	ft_strcat(res, s2);
	return (res);
}

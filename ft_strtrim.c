/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:32:47 by edhommee          #+#    #+#             */
/*   Updated: 2016/11/07 16:44:21 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cuttrim(char *s)
{
	int		i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	return (i);
}

static void			ft_reverse(char *str, int size)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static int			ft_counttrim(char *s, int size)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		i++;
		j++;
	}
	ft_reverse(s, size);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	tmp = (char *)s;
	str = malloc(sizeof(char) * (ft_strlen(s) - ft_counttrim((char *)tmp, strlen(s)) + 1));
	if (!str)
		return (NULL);
	j = ft_cuttrim(tmp);
	ft_reverse(tmp, strlen(s));
	k = ft_cuttrim(tmp);
	while (k < (int)strlen(s) - j)
	{
		str[i] = tmp[k];
		k++;
		i++;
	}
	return (str);
}

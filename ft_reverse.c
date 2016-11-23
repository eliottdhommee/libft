/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:25:39 by edhommee          #+#    #+#             */
/*   Updated: 2016/11/21 11:25:59 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_reverse(char *str, int size)
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
	return (str);
}

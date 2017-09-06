/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 15:17:57 by edhommee          #+#    #+#             */
/*   Updated: 2017/09/06 11:24:08 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			get_stmode(char *pathfile, char opt)
{
	struct stat		file_stat;

	lstat(pathfile, &file_stat);
	if (opt == 'R')
		return (S_ISREG(file_stat.st_mode));
	if (opt == 'D')
		return (S_ISDIR(file_stat.st_mode));
	if (opt == 'C')
		return (S_ISCHR(file_stat.st_mode));
	if (opt == 'B')
		return (S_ISBLK(file_stat.st_mode));
	if (opt == 'F')
		return (S_ISFIFO(file_stat.st_mode));
	if (opt == 'L')
		return (S_ISLNK(file_stat.st_mode));
	if (opt == 'S')
		return (S_ISSOCK(file_stat.st_mode));
	return (0);
}
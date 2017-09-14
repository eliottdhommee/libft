/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:57:54 by edhommee          #+#    #+#             */
/*   Updated: 2017/09/14 15:59:40 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			get_stmode2(char *pathfile, char opt)
{
	struct stat		file_stat;

	stat(pathfile, &file_stat);
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

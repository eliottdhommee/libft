/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 15:17:57 by edhommee          #+#    #+#             */
/*   Updated: 2017/08/24 15:31:04 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			get_stmode(char *pathfile, char *opt)
{
	struct stat		file_stat;

	lstat(pathfile, &file_stat);
	if (ft_strequ(opt, "REG"))
		return (S_ISREG(file_stat.st_mode));
	if (ft_strequ(opt, "DIR"))
		return (S_ISDIR(file_stat.st_mode));
	if (ft_strequ(opt, "CHR"))
		return (S_ISCHR(file_stat.st_mode));
	if (ft_strequ(opt, "BLK"))
		return (S_ISBLK(file_stat.st_mode));
	if (ft_strequ(opt, "FIFO"))
		return (S_ISFIFO(file_stat.st_mode));
	if (ft_strequ(opt, "LNK"))
		return (S_ISLNK(file_stat.st_mode));
	if (ft_strequ(opt, "SOCK"))
		return (S_ISSOCK(file_stat.st_mode));
	return (0);
}

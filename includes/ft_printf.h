/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 22:51:14 by edhommee          #+#    #+#             */
/*   Updated: 2017/05/21 17:05:48 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>

typedef struct	s_flags
{
	int			hash;
	int			zero;
	int			min;
	int			space;
	int			plus;
	int			apos;
}				t_flags;

enum lenght
{
	hh, h, l, ll, j, t, z, q, L
};


typedef struct	s_conv
{
	t_flags		flags;
	int			width;
	int			preci;
	lenght		len;
	char		type;
	int			id;
}				t_conv;

typedef struct	s_env
{
	char		*form;
	char		*str;
	int			numbered;
	int			i;
	t_conv		conv;
}				t_env;

int				ft_printf(const char *format, ...);

int				isconv(char c);
int				istype(char c);
int				isflag(char c);

t_flags			*flagsnew(t_flags *flags);
t_conv			*convnew(t_conv *conv);
t_env			*envnew(t_env *env, char *format);

int				get_id(t_env *env);
t_flags			*get_flags(t_env *env);
int				get_width(t_env *env);
int				get_preci(t_env *env);
enum lenght		get_len(t_env *env);

#endif

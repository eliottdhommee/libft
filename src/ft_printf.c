/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <eliottdhommee@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 22:49:09 by edhommee          #+#    #+#             */
/*   Updated: 2017/05/21 03:07:12 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		print(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, str, i);
	return(i);
}

t_env	*get_conv(t_env *env)
{
	t_conv	*new;
	int		start;
	int		i;

	i = env->i;
	start = i;
	while (env->form[i] && !istype(env->form[i]))
		i++;
	if (!env->form[i])
		return(NULL);
	new = flagnew(new);
	new->type = env->form[i];
	new->id = get_id(env);
	new->flags = get_flags(env);
	new->width = get_width(env);
	new->preci = get_preci(env);
	new->len = get_len(&env);
	env->conv = new;
	return (env);
}

t_env	*get_string(t_env *env, va_list ap)
{
	while (env->form[env->i])
	{
		if (isconv(env->form[env->i]))
		{
			env = get_conv(env);
			env = add_conv_to_str(env, ap);
		}
		else
			env = add_chars_to_str(env);
	}
	return (env);
}

int		ft_printf(const char *format, ...)
{
	t_env	*env;
	va_list	ap;
	int		res;
	if (!format)
		return (-1);
	else if (!ft_strchr(env->form, '%'))
		res = print(format);
	else
	{
		va_start(ap, env->form);
		env = init_env(env, format);
		env = get_string(env, ap);
		res = print(env->str);
		va_end(ap);
	}
	return (res);
}

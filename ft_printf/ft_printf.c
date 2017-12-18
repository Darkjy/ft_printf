/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 14:56:39 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 06:27:53 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_printf(const char *restrict format, ...)
{
	va_list			arg;
	int				last_return;
	t_join			*lst;
	t_split_tool	tool;

	if (!format)
		return (0);
	tool = init_tool();
	lst = new_lst();
	va_start(arg, format);
	last_return = first_step(format, &tool, lst, arg);
	va_end(arg);
	return (last_return);
}

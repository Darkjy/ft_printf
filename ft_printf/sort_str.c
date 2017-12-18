/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:56:28 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 00:00:01 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				is_escapable(int c)
{
	if (!(ft_strchr("#0+- .123456789lhjzsSpdDioOuUxXcC%", c)))
		return (-1);
	return (0);
}

static short	sort_instruction(const char *format, t_split_tool *tool,
				t_join *lst)
{
	tool->len = 0;
	while (format[tool->i] && is_instruct(format[tool->i]) != 1)
	{
		tool->len++;
		tool->i++;
		if ((is_escapable(format[tool->i]) == -1))
		{
			make_the_list(format, tool, lst);
			return (tool->i++);
		}
		if (format[tool->i] == '%')
		{
			make_the_list(format, tool, lst);
			return (tool->i++);
		}
	}
	make_the_list(format, tool, lst);
	if (is_instruct(format[tool->i]) == 1)
		tool->i++;
	return (1);
}

static void		sort_normal(const char *format, t_split_tool *tool, t_join *lst)
{
	tool->len = 0;
	tool->start = tool->i;
	while (format[tool->i] != '%' && format[tool->i])
	{
		tool->len++;
		tool->i++;
	}
	make_the_list(format, tool, lst);
}

t_join			*sort_str(const char *format, t_split_tool *tool, t_join *lst)
{
	if (format[tool->i] != '%')
	{
		sort_normal(format, tool, lst);
		while (lst && lst->next)
			lst = lst->next;
		lst->instruct = 0;
		return (lst);
	}
	else if (format[tool->i] == '%')
	{
		tool->start = tool->i + 1;
		sort_instruction(format, tool, lst);
		while (lst && lst->next)
			lst = lst->next;
		lst->instruct = 1;
		return (lst);
	}
	return (lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:51:55 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 04:22:42 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*set_space_left(int len, int min, char *tmp)
{
	int		i;
	char	*tmp2;

	if (min - len <= 0)
		return (tmp);
	tmp2 = ft_strnew(min - len);
	i = 0;
	while (min > len)
	{
		tmp2[i] = ' ';
		min--;
		i++;
	}
	tmp2[i + 1] = '\0';
	tmp = ft_strjoin_nfree(tmp, tmp2, 3);
	return (tmp);
}

char			*set_space(int len, int min, char *tmp)
{
	int		i;
	char	*tmp2;

	if (min - len <= 0)
		return (tmp);
	tmp2 = ft_strnew(min - len);
	i = 0;
	while (min > len)
	{
		tmp2[i] = ' ';
		min--;
		i++;
	}
	tmp2[i + 1] = '\0';
	tmp = ft_strjoin_nfree(tmp2, tmp, 3);
	return (tmp);
}

char			*space_x_num(t_flags *flags, char *tmp)
{
	if (flags->minus == MINUS)
		tmp = set_space_left(ft_strlen(tmp), flags->field_width, tmp);
	tmp = set_space(ft_strlen(tmp), flags->field_width, tmp);
	return (tmp);
}

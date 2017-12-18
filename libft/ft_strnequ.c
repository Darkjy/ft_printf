/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 23:06:09 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/08 05:26:14 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	diff;

	if (!s1 || !s2)
		return (0);
	if (n <= 0)
		return (1);
	diff = ft_strncmp(s1, s2, n);
	if (diff == 0)
		return (1);
	return (0);
}

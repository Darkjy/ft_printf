/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 02:17:55 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/08 05:56:40 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;
	char	b;

	a = (char *)s;
	b = (char)c;
	i = ft_strlen(a) - 1;
	if (!s[0])
		return (NULL);
	if (a[i + 1] == b)
		return (&a[i + 1]);
	while (i)
	{
		if (a[i] == b)
			return (&a[i]);
		--i;
	}
	if (a[i] == b)
		return (&a[i]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 00:49:39 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/08 04:32:55 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		a;
	unsigned char		*b;

	i = 0;
	b = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (b[i] == a)
			return (&b[i]);
		i++;
	}
	return (NULL);
}

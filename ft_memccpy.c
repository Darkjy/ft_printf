/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 23:50:42 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/16 19:39:43 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp;
	unsigned char		*tmp2;
	size_t				i;
	unsigned char		kaka;

	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	i = 0;
	kaka = (unsigned char)c;
	while (i < n)
	{
		if ((*tmp2++ = *tmp++) == kaka)
			return (tmp2);
		i++;
	}
	return (NULL);
}

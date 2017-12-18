/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 22:14:43 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/02 02:18:12 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	if (len == 0)
		return (b);
	s = (unsigned char *)b;
	while (len--)
	{
		*s = (unsigned char)c;
		if (len)
			s++;
	}
	return (b);
}

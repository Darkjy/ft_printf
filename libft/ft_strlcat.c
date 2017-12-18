/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat*unfinished*.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 02:56:00 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/16 22:23:43 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

unsigned long	ft_strlcat(char *dest, char const *src, unsigned long n)
{
	unsigned long i;
	unsigned long l_dest;
	unsigned long l_src;

	i = 0;
	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (n <= l_dest)
		return (n + l_src);
	while (i < (n - l_dest - 1) && src[i] != '\0')
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 06:17:41 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 06:36:07 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		conv_hex(uintmax_t nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char			*ft_itoa_base(uintmax_t n, uintmax_t base)
{
	uintmax_t		tmpn;
	int				i;
	char			*str;

	i = 0;
	tmpn = n;
	while (tmpn >= base)
	{
		tmpn /= base;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		tmpn = n % base;
		str[i] = conv_hex(tmpn);
		n /= base;
		i--;
	}
	return (str);
}

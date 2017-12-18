/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 21:38:12 by jucoppa           #+#    #+#             */
/*   Updated: 2017/11/17 05:53:44 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		itoa_isnegativ(int *n, int *negativ)
{
	if (*n < 0)
	{
		*n *= -1;
		*negativ = 1;
	}
}

char			*ft_itoa(int n)
{
	int		tmpn;
	int		i;
	int		negativ;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmpn = n;
	i = 2;
	negativ = 0;
	itoa_isnegativ(&n, &negativ);
	while (tmpn /= 10)
		i++;
	i += negativ;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (negativ)
		str[0] = '-';
	return (str);
}

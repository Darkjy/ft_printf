/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 18:55:33 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/24 18:58:14 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		start1;
	int		start2;
	char	tmp;

	start1 = 0;
	start2 = ft_strlen(str);
	while (str[start1] != str[start2])
	{
		tmp = str[start1];
		str[start1] = str[start2];
		str[start2] = tmp;
	}
	return (str);
}

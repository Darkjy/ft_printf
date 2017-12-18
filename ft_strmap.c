/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:05:16 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/16 22:11:44 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s == 0 || f == 0)
		return (0);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (0);
	i = -1;
	while (s[++i])
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}

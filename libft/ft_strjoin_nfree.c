/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_nfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:19:49 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 01:41:30 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_nfree(char *s1, char *s2, int option)
{
	char	*str;
	int		len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memmove(str, s1, ft_strlen(s1) + 1);
	ft_strncat(str, s2, len);
	if (option != 0)
	{
		if (option == 1 || option == 3)
			if (s1)
				free(s1);
		if (option == 2 || option == 3)
			if (s2)
				free(s2);
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_nfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 04:31:48 by jucoppa           #+#    #+#             */
/*   Updated: 2017/12/02 04:51:38 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_nfree(char *s, unsigned int start, size_t len, int option)
{
	char		*str;
	size_t		i;
	size_t		k;

	i = start;
	k = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (k < len && s && s[i])
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	if (option == 1)
		if (s)
			free(s);
	return (str);
}

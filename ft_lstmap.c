/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucoppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 23:25:26 by jucoppa           #+#    #+#             */
/*   Updated: 2017/03/25 19:18:47 by jucoppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;

	if (!lst)
		return (0);
	else
	{
		res = (t_list*)malloc(sizeof(f(lst)));
		res = f(lst);
		res->next = ft_lstmap(lst->next, f);
		return (res);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:48:20 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 23:07:06 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*chain;

	chain = NULL;
	while (lst)
	{
		f(lst);
		ft_lstadd(&chain, ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (chain);
}

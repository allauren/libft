/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:01:27 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 23:05:10 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*chain;

	if (!content)
	{
		chain->content = NULL;
		chain->content_size = 0;
	}
	else
	{
		if (!(chain = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		chain->content = (void*)content;
		chain->content_size = content_size;
		chain->next = NULL;
	}
	return (chain);
}

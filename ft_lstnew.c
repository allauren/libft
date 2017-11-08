/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:01:27 by allauren          #+#    #+#             */
/*   Updated: 2017/11/08 06:54:37 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*t_list		*ft_lstnew(void const *content, size_t content_size)
  {
  t_list		*chain;

  if (!(chain = (t_list*)malloc(sizeof(t_list))))
  return (NULL);
  if (!content)
  {
  chain->content = NULL;
  chain->content_size = 0;
  }
  else
  {
  chain->content = (void*)content;
  chain->content_size = content_size;
  }
  chain->next = NULL;
  return (chain);
  }*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{	
	t_list*new;

	if ((new = (t_list *)malloc(sizeof(*new))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if ((new->content = malloc(content_size)) == NULL)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 20:52:06 by allauren          #+#    #+#             */
/*   Updated: 2017/10/09 21:20:45 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr (void *ptr, int value, size_t num )
{
	unsigned int	i;

	i = 0;
	while (i < num)
	{
		if(((unsigned char*)ptr)[i] == (unsigned char)value)
			return(&((unsigned char*)ptr)[i]);
		i++;
	}
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:00:41 by allauren          #+#    #+#             */
/*   Updated: 2017/10/06 00:23:11 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t		i;

	i = 0;
	while(i < num && ((unsigned char*)ptr)[i])
	{
		((unsigned char*)ptr)[i] = value;
		i++;
	}
	return(ptr);
}

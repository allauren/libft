/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 01:07:03 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 20:58:55 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int find, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char*)dest)[i] == find)
			return (&((unsigned char *)dest)[i]);
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (0);
}

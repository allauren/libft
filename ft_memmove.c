/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 21:40:27 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 17:05:24 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned int	i;
	char			*ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * (num + 1))))
		return (NULL);
	i = 0;
	while (((unsigned char*)src)[i])
	{
		ptr[i] = ((unsigned char*)src)[i];
		i++;
	}
	i = 0;
	while (i < num)
	{
		((unsigned char*)dest)[i] = ptr[i];
		i++;
	}
	free(ptr);
	return (((unsigned char*)dest));
}

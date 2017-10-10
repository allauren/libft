/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 21:57:07 by allauren          #+#    #+#             */
/*   Updated: 2017/10/10 22:43:28 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char * dest, const char *src, size_t num)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j] && j < num)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if( j != num)
	dest[i] = src[i];
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 21:25:53 by allauren          #+#    #+#             */
/*   Updated: 2017/10/10 21:30:46 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	if(!(ptr=(char*)malloc(sizeof(char)*(strlen(s1)+1))))
		return (0);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}

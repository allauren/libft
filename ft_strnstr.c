/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 22:53:26 by allauren          #+#    #+#             */
/*   Updated: 2017/10/25 00:20:45 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(char *s1 , char *s2 , size_t  len)
{
	unsigned int	i;
	unsigned int	j;
	
	j = 0;
	i = 0;
	while(s1[i])
	{
		if(s1[i] == s2[j])
		{
			while(s2[j] && s1[i + j] == s2[j] && j < len)
				j++;
					if(!(s2[j]) || j == len)
						return(&s1[i]);
					else
						j = 0;
		}
	i++;
	}
	return(NULL);
}

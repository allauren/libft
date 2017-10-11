/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 02:33:51 by allauren          #+#    #+#             */
/*   Updated: 2017/10/11 02:40:50 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if(!s1 || !s2 || (!s1[n] && s2[n]) || (s1[n] && !s2[n]))
		return (0);
	while(i < n)
		{
			if(s1[i] != s2[i])
				return (0);
		i++;
		}
	return (1);
}
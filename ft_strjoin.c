/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 00:50:13 by allauren          #+#    #+#             */
/*   Updated: 2017/10/25 00:21:42 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				size;
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	size = ft_strlen(((char*)s1)) + ft_strlen(((char*)s2));
	if(!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return(NULL);
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return(str);
}

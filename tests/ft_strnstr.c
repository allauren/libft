/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 22:53:26 by allauren          #+#    #+#             */
/*   Updated: 2017/11/07 17:36:52 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!s2 && !s1)
		return (0);
	if (!s2[i])
		return (s1);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			while (s2[j] && s1[i + j] == s2[j] && j < len)
				j++;
			if (!(s2[j]) && j + i <= len)
				return (&s1[i]);
			else if (j != len)
				j = 0;
		}
		i++;
	}
	return (NULL);
}

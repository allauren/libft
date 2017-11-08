/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 01:41:32 by allauren          #+#    #+#             */
/*   Updated: 2017/11/08 14:23:26 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		begin[2];
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	begin[0] = i;
	begin[1] = i;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			begin[1] = i + 1;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (begin[1] - begin[0] + 1))))
		return (NULL);
	i = 0;
	while (i < (begin[1] - begin[0]))
	{
		str[i] = s[begin[0] + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

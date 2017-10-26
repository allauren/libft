/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 01:41:32 by allauren          #+#    #+#             */
/*   Updated: 2017/10/25 02:56:01 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		begin;
	int		end;
	char	*str;

	i = 0;
	while (s[i] == ' ' || s[i]=='\n' || s[i]=='\t')
		i++;
	begin = i;
	end = i;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			end = i + 1;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (end - begin + 1))))
		return (NULL);
	i = 0;
	while (i < (end - begin))
	{
		str[i] = s[begin + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

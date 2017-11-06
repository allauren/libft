/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 02:28:33 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 19:17:18 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int		ft_sizeword(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	if (!(t = (char**)malloc(sizeof(char*) * (ft_countwords(s, c)))))
		return (NULL);
	while (s[i[0]] && s[i[0]] == c)
		i[0]++;
	while (s[i[0]])
	{
		i[2] = 0;
		if (!(t[i[1]] = (char*)malloc(sizeof(char) * ft_sizeword(&s[i[0]], c))))
			return (NULL);
		t[i[1]] = ft_strncpy(t[i[1]], &s[i[0]], (ft_sizeword(&s[i[0]], c) - 1));
		i[0] = i[0] + ft_sizeword(&s[i[0]], c) + 1;
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		i[1]++;
	}
	t[i[1]] = NULL;
	return (t);
}

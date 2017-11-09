/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 23:08:34 by allauren          #+#    #+#             */
/*   Updated: 2017/11/08 02:05:20 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int character)
{
	int		i;
	char	*ret;

	i = 0;
	ret = 0;
	while (str[i])
	{
		if (ft_strchr(&str[i], character))
			ret = ft_strchr(&str[i], character);
		i++;
	}
	if (i == 0 && character == '\0')
		return (str);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 23:08:34 by allauren          #+#    #+#             */
/*   Updated: 2017/10/10 23:16:52 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char * str, int character)
{
	int i;
	char *ret;

	i = 0;
	ret = NULL;
	while(str[i])
	{
		ret = ft_strchr(&str[i], character);
		i++;\
	}
	return (ret);
}


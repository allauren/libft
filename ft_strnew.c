/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 00:47:38 by allauren          #+#    #+#             */
/*   Updated: 2017/10/11 00:50:55 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	unsigned int	i;
	char			*slptr;

	i = 0;
	slptr=(char*)malloc(sizeof(char)*(size + 1));
	while (i < size)
	{
		slptr[i] = '\0';
		i++;
	}
	slptr[i] = '\0';
	return (slptr);
}

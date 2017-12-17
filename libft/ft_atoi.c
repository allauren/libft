/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 01:38:15 by allauren          #+#    #+#             */
/*   Updated: 2017/12/17 08:20:12 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_atoi(const char *str)
{
	long	i;
	long	jack;
	int		neg;

	i = 0;
	jack = 0;
	neg = 1;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
	(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		jack = jack * 10;
		jack = str[i] - '0' + jack;
		i++;
	}
	return ((jack * neg));
}

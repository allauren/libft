/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:47:09 by allauren          #+#    #+#             */
/*   Updated: 2017/10/10 21:37:37 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long jack;
	long i;

	jack = nb;
	i = 1;
	if (nb < 0)
	{
		jack = -jack;
		ft_putchar('-');
	}
	while (i < jack)
		i = i * 10;
	while(jack > 9)
	{
		i = i / 10;
		ft_putchar(jack / i + '0');
		jack = jack % i;
	}
	ft_putchar(jack / 1 + '0');
}

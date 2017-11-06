/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:21:11 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 20:45:40 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long jack;
	long i;

	jack = nb;
	i = 1;
	if (nb < 0)
	{
		jack = -jack;
		ft_putchar_fd('-', fd);
	}
	while (i <= jack)
		i = i * 10;
	while (jack > 9)
	{
		i = i / 10;
		ft_putchar_fd(jack / i + '0', fd);
		jack = jack % i;
	}
	ft_putchar_fd(jack / 1 + '0', fd);
}

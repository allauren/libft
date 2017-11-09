/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:21:11 by allauren          #+#    #+#             */
/*   Updated: 2017/11/08 06:48:04 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long i;

	i = 1;
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar_fd('-', fd);
		}
		while (i <= nb)
			i = i * 10;
		while (i > 10)
		{
			i = i / 10;
			ft_putchar_fd(nb / i + '0', fd);
			nb = nb % i;
		}
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

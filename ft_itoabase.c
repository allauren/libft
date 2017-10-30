/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 03:21:03 by allauren          #+#    #+#             */
/*   Updated: 2017/10/26 03:11:20 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive(char *str, long jack,int base,long i)
{
	if (jack < 0)
	{
		*str = '-';
		return(ft_recursive((str + 1), -jack, base, i));
	}
	if(jack >= base)
	{
		if((jack / i) < 10)
			*str = jack / i + '0';
		else
			*str = jack / i - 10 + 'A';
		return(ft_recursive((str + 1), (jack % i), base, (i / base)));
	}
	if((jack / i) < 10)
		*str = jack  + '0';
	else
		*str = jack  - 10 + 'A';
		*(str + 1) = '\0';
}

char*	ft_itoabase(int nb, int base)
{
	long	jack;
	long	i;
	int		neg;
	char	*str;
	int		count;

	jack = nb;
	i = 1;
	neg = 0;
	count = 0;
	if (nb == 0)
		return ("0");
	if(nb < 0)
		neg = 1;
	while (i <= jack || (i * -neg) >= jack)
	{
		i = i * base;
		count ++;
	}
	if(!(str = (char*)malloc(sizeof(char) * (count + neg + 1))))
		return (NULL);
	ft_recursive(str, jack, base, (i / base));
	return (str);
}

int main(int argc, char *argv[])
{
	ft_putstr(ft_itoabase(ft_atoi(argv[1]), ft_atoi(argv[2])));
	return 0;
}
/*
   while(jack >= base)
   {
   t		i = i / base;
   if((jack / i) < 10)
   str[j] = jack / i + '0';
   else
   str[j] = jack / i - 10 + 'A';
   j++;
   jack = jack % i;
   }
   if((jack / i) < 10)
   str[j] = jack  + '0';
   else
   str[j] = jack  - 10 + 'A';
   */

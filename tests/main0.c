/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */

/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:33:23 by allauren          #+#    #+#             */
/*   Updated: 2017/10/06 00:19:23 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char	s[50] = "test";
	char	s1[50] = "test";
	char	s2[50] = "la nature est un temple ou de living pillars";
	/*ft_bzero
	ft_memdel
	*/
	ft_putstr("je passe la");
		if((ft_atoi("+-5400") - atoi("+-5400")) != 0)
			ft_putstr("erreur dans atoi\n");
		if((ft_atoi("-2147483648") - atoi("-2147483648")) != 0)
			ft_putstr("erreur dans atoi\n");
		if((ft_isdigit(47) - isdigit(47)) != 0)
			ft_putstr("erreur dans isdigit\n");
		if((ft_isalnum(47) - isalnum(47)) != 0)
			ft_putstr("erreur dans isalnum\n");
		if((ft_isalpha('c') - isalpha('c')) != 0)
			ft_putstr("erreur dans isalpha\n");
		if((ft_isascii(58) - isascii(58)) != 0)
			ft_putstr("erreur dans isascii\n");
		if((ft_isprint(87) - isprint(87)) != 0)
			ft_putstr("erreur dans isprint\n");
		if((strcmp(ft_itoa(-2147483648), "-2147483648")) !=0)
			ft_putstr("erreur dans itoa\n");
		if((strcmp(ft_itoa(0), "0")) !=0)
			ft_putstr("erreur dans itoa\n");
		if(!ft_memalloc(4))
		ft_putstr("erreur dans ft_memmalloc\n");
		if(strcmp(ft_memccpy(s, "tuquoquemifillit", 'f', 10), "tuquoquemi") != 0)
			ft_putstr("erreur dans ft_memccpy\n");
		if(strcmp(ft_memchr("je suis la", ' ', 5), " suis la") != 0)
			ft_putstr("erreur dans ft_memccpy\n");

		if(ft_memcmp("test", "test", 4))
		ft_memcpy(s, "je suis la", 9);
		if(s[8] != 'a')
			ft_putstr("erreur dans ft_memccpy\n");

		ft_strcat(s, "je fais rien");
		if (s[3] !='f')
			ft_putstr("erreur dans ft_memccpy\n");
		if(!(ft_strchr("alexis", 's')))
			ft_putstr("erreur dans ft_memccpy\n");
		ft_memmove(s, "xxx", 3);
			ft_putstr("erreur dans ft_memccpy\n");
		if(s[2] != 'x')
			ft_putstr("erreur dans ft_memccpy\n");
		ft_memset(s, 'c', 3);
		if(s[2] != 'c')
			ft_putstr("erreur dans ft_memccpy\n");
		ft_putstr("fin des tests");
		return (0);
}
		/*
		if((ft_strcmp
		if((ft_strcpy
		if((ft_strdup
		if((ft_strlcat
		if((ft_strlen
		if((ft_strncat
		if((ft_strncmp
		if((ft_strncpy
		if((ft_strnstr
		if((ft_strrchr
		if((ft_strstr
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
		if((
}
*/

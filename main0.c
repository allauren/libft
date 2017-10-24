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

int main(int argc, char *argv[])
{
	char	str[]="alexis               ";
	ft_putstr("test de ft_memset avec mon prenom remplace par des * sur les 3 premiers\n");
	ft_memset(str, '*', 3);
	ft_putstr(str);
	ft_putchar('\n');
	if(str[1] == '*')
		ft_putstr("ft_memset fonctionne test de ft_bzero maintenant sur la string\n");
	else
		ft_putstr("ft_memset en erreur test de ft_bzero maintenant sur la string\n");
	ft_bzero(str, 18);
	if(!str[1])
		ft_putstr("ft_bzero fonctionne test de ft_memcpy ou l on remet mon prenom\n");
	else
		ft_putstr("ft_bzero en erreur test de ft_memcpy ou l on remet mon prenom\n");
	ft_memcpy(str,"ale", sizeof("ale"));
	if(str[0] == 'a')
		ft_putstr("ft_memcpy fonctionne test maintenant de ft_memccpy avec laurent jusqu a t\n"); 
	else
		ft_putstr("ft_memcpy en erreur test maintenant de ft_memccpy avec laurent jusqu a t\n"); 
	ft_memccpy(str, "laurent", 't', sizeof("laurent"));
	if(str[1] =='a')
		ft_putstr("ft_memccpy fonctionne test maintenant de ft_memmove pour mettre mon nom prenom\n");
	else
		ft_putstr("ft_memccpy en erreur test maintenant de ft_memmove pour mettre mon nom prenom\n");
	ft_memmove(str+7," alexis",7);
	if(str[8] == 'a')
		ft_putstr("ft_memmove fonctionne test de ft_memchr sur x\n");
	else
		ft_putstr("ft_memmove en erreur test de ft_memchr sur x\n");
	ft_putstr(ft_memchr(str, 'x', sizeof(str)));
	ft_putstr("\n on va comparer maintenant avec mon nom prenom si strcmp fonctionne \n");
	if(!(ft_strcmp(str, "laurent alexis")))
		ft_putstr("ft_strcmp fonctionne on va maintenant verifier que la longueur est bien de 14");
	else
		ft_putstr("ft_strcmp fonctionne on va maintenant verifier que la longueur est bien de 14");
	
	return 0;
}

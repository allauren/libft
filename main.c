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
	if(argc>=3)
	{
		ft_putstr("la taille de argv[1] est ");
		ft_putnbr(ft_strlen(argv[1]));
		ft_putstr ("\ntest de memcpy avec argv 2 dest de argv 1 et 3 caractere\n");
		ft_putstr(ft_memcpy(argv[2], argv[1], 3));
		ft_putstr("\n on cherche maintenant c avec ft_memccpy jusqu au caractere 4\n");
		ft_putstr("et on check avec memchr si c est bien present \n");
		if(!ft_memccpy(argv[2], argv[1], 'c', 5))
		{
			ft_putstr("pas trouve merci de saisir c dans argv[2] pour continuer les tests");
			ft_putchar('\n');
			ft_putstr(argv[2]);
		}
		else
		{
			ft_putstr(ft_memccpy(argv[2], argv[1], 'c', 4));
			ft_putchar('\n');
			ft_putstr(argv[2]);
		}
		ft_putchar('\n');
		ft_putstr(ft_memchr(argv[2], 'c', 4));
		ft_putchar('\n');
		ft_putstr("on fait maintenant la diff des 5 premiers caracteres\n");
		ft_putnbr(ft_memcmp(argv[1], argv[2], 5));
		ft_putstr("\ntest memset avec 6 - et 10 i sur argv 1\n");
		ft_memset(argv[1], '-', 6);
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_memset(argv[1], 'i', 10);
		ft_putstr(argv[1]);
		ft_putchar('\n');
		ft_bzero(argv[1], 6);
		ft_putstr("test si j ai bien efface le premier caractere avec bzero\n");
		if(!argv[1][0])
	ft_putstr("j ai bien marche \n");
	ft_putstr("test de memmove\n");
	char str[] = "memmove can be very useful......";
	ft_memmove(str+20,str+15,11);
	ft_putstr(str);
	ft_putstr(" \net je copie ce resultat dans un argv 1 grace a ft_strcpy\n");
	ft_strcpy(argv[1], str);
	ft_putstr(argv[1]);
	ft_putstr("\nje verifie que ft_strdup me renvoie bien argv[1]\n");
	ft_putstr(ft_strdup(argv[1]));
		}
		else
	ft_putstr("Bonjour, afi de tester les differentes fonctions merci de saisir 2 arguments avec argv2 avec des c");

	return 0;
}

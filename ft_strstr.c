/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 00:14:38 by allauren          #+#    #+#             */
/*   Updated: 2017/10/11 00:23:36 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strstr (char * str1, const char * str2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(str1[i])
	{
		if(str1[i] == str2[j])
		{
			while(str2[j] && str1[i + j] == str2[j])
				j++;
					if(str2[j])
						j = 0;
					else
						return(&str1[i]);
		}
	i++;
	}
	return(NULL);
}

int main ()
{
  char str[] ="This is a simple string";
    char * pch;
	  pch = ft_strstr (str,"simple");
	    strncpy (pch,"sample",6);
		  puts (str);
		    return 0;
			}


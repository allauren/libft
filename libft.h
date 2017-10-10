/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:24:12 by allauren          #+#    #+#             */
/*   Updated: 2017/10/10 23:05:03 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	*ft_memcpy(void* dest, const void* src, size_t count);
void	*ft_memccpy(void* dest, const void* src, int c, size_t count);
int		ft_strlen(char *c);
void	*ft_memchr(void *ptr, int value, size_t num );
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char * destination, const char *source);
char	*ft_strncpy (char * dest, const char *src, size_t num);
char	*ft_strncat(char * dest, const char *src, size_t num);
char	*ft_strchr(char *str, int c);





#endif

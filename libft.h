/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:24:12 by allauren          #+#    #+#             */
/*   Updated: 2017/10/25 23:54:02 by allauren         ###   ########.fr       */
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
char	*ft_strrchr(char * str, int character);
char	*ft_strstr (char * str1, const char * str2);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmap(char const *s, char (*f)(char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(char *str);

#endif

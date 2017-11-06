/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:24:12 by allauren          #+#    #+#             */
/*   Updated: 2017/11/06 20:56:39 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				isdigit(int c);
int				isalnum(int c);
int				isalpha(int c);
int				isascii(int c);
int				isprint(int c);
char			*ft_itoa(int nb);
char			*ft_itoabase(int jack, int base);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dest, const void *sr, int find, size_t count);
void			*ft_memchr(void *ptr, int value, size_t num);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dest, const void *src, size_t num);
void			*ft_memset(void *ptr, int value, size_t num);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr(char *str);
void			ft_putstr_fd(char const *s, int fd);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(char *str, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f) (char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *dest, const char *src, size_t num);
int				ft_strncmp(const char *s1, const char *s2, size_t num);
char			*ft_strncpy(char *dest, const char *src, size_t num);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(char *s1, char *s2, size_t len);
char			*ft_strrchr(char *str, int character);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(char *str1, const char *str2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif

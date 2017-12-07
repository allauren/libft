/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:27:47 by allauren          #+#    #+#             */
/*   Updated: 2017/12/07 09:04:29 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# include <wchar.h>
# include <locale.h>
# include "get_next_line.h"
# define TYPE  "sSpdDioOuUxXcC%"

typedef struct				s_option
{
	int		hash;
	int		moins;
	int		plus;
	int		space;
	int		zero;
	int		quote;
	int		length;
	int		pre;
}							t_option;
typedef struct				s_size
{
	int		h;
	int		l;
	int		j;
	int		z;
}							t_size;
typedef struct				s_init
{
	int		i;
	int		j;
	int		len;
}							t_init;
typedef struct				s_decla
{
	int		i;
	int		j;
}							t_decla;
typedef struct				s_convert
{
	char	c;
	int		(*f)(va_list ap, t_option *s, t_size *l);
}							t_convert;
typedef unsigned long long	t_ull;
int							wcharlen(unsigned int c);
char						*fill_tab(char *str, wint_t c);
int							ft_is_valid(wchar_t c);
unsigned long long			ft_parseul_size(va_list ap, t_size *l);
unsigned long long			ft_parsel_size(va_list ap, t_size *l);
void						print_padding(t_option *s, char *str, int len);
int							ft_printf(const char *format, ...);
char						*ft_itoa_base(unsigned long long jack, int base);
unsigned long long			absolute_value(long long i);
int							ft_sizenum(t_ull nb, int base);
unsigned long long			ft_is_negative(long long nb);
char						*iszero(char *str, t_option *s, int i, int base);
char						*isplus(char *str, int *nb, t_option *l);
int							printf_string(va_list ap, t_option *s, t_size *l);
void						printf_to_limit(char *str, int i);
int							printf_pourcent(va_list ap, t_option *s, t_size *l);
void						printf_carac(int len, char c);
void						print_padding(t_option *s, char *str, int len);
int							printf_char(va_list ap, t_option *s, t_size *l);
char						*set_zeroo(t_option *s, char *str, int len, int i);
int							ft_parse(const char *format, va_list ap, int *nb);
char						*ft_ishash(char *str);
void						ft_strtolower(char *str);
int							ft_stritostr(const char *str1, const char *str2);
int							printf_p(va_list ap, t_option *s, t_size *l);
int							ft_setoption(char *option, t_option *s, t_size *l);
char						*iszeroo(char *str, t_option *s, int i);
int							printf_numbers(va_list ap, t_option *s, t_size *l);
char						*ft_isp(char *str);
int							printf_unumbers(va_list ap, t_option *s, t_size *l);
void						printf_to_limit(char *str, int i);
int							printf_octm(va_list ap, t_option *s, t_size *l);
int							printf_dnumbers(va_list ap, t_option *s, t_size *l);
int							printf_umnumbers(va_list p, t_option *s, t_size *l);
int							printf_oct(va_list ap, t_option *s, t_size *l);
int							printf_hexm(va_list ap, t_option *s, t_size *l);
char						*iszeroh(char *str, t_option *s, int i, int base);
int							printf_hex(va_list ap, t_option *s, t_size *l);
char						*ft_ishash(char *str);
int							printf_wchar(va_list ap, t_option *s, t_size *l);
char						*ft_ishasho(char *str);
char						*ft_null();
unsigned long long			ft_parse_size(va_list ap, t_size *l);
unsigned long long			ft_parseu_size(va_list ap, t_size *l);
int							printf_wstr(va_list ap, t_option *s, t_size *l);
#endif

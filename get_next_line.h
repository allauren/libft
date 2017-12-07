/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:57:09 by allauren          #+#    #+#             */
/*   Updated: 2017/12/07 09:03:59 by allauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 26
# define LEN ft_strlen

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# define EOL '\n'

typedef struct		s_gnl
{
	unsigned int	i;
	int				rt;
	unsigned int	cnt;
	char			*ptr;
	char			buf[BUFF_SIZE + 1];
	t_list			*begin;
	int				end;
	int				mal;
}					t_gnl;
int					get_next_line(const int fd, char **line);

#endif

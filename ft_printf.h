/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <hvuorine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:07:10 by hvuorine          #+#    #+#             */
/*   Updated: 2020/02/19 15:40:16 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# define BUFF_SIZE 1024

# define TRUE 1
# define FALSE 0

typedef struct			s_printf
{
        int                             buff_i;
	int					len;
	short				f;
	short				n;
	int					min_length;
	int					precision;
	int					padding;
	int					printed;
	char				buff[BUFF_SIZE];
	va_list				ap;
	char				*format;
	unsigned			c;
}						t_printf;
int		ft_printf(const char *format, ...);
void	ft_parse(t_printf *pf);
void        ft_flags(t_printf *pf, int i);
#endif

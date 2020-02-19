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

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#define BUFF_SIZE 1024

typedef struct			s_printf
{
	int					len;
	short				f;
	short				n;
	int					min_length;
	int					precision;
	int					padding;
	int					printed;
	int					buffer_index;
	char				buff[BUFF_SIZE];
	va_list				ap;
	char				*format;
	unsigned			c;
}						t_printf;
int		ft_printf(const char *format, ...);
void	ft_parse(t_printf pf, char *format);

#endif

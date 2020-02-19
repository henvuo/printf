/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <hvuorine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:54:04 by hvuorine          #+#    #+#             */
/*   Updated: 2020/02/19 15:35:00 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_parse(t_printf pf, char *format)
{
	while (*format)
	{
		if (*format == '%' && *format + 1 != '%')
		{
			//edit flags here
		}
		if (*format == '-')
		{
		}
		else
			write(1, pf.format, 1);
		++pf.format;
	}
}

int		ft_printf(const char *format, ...)
{
	t_printf pf;
//	ft_bzero(&pf, sizeof(pf));
	pf.format = (char*)format;
//	va_start(pf.ap, format);
//	printf("%s", pf.format);
	ft_parse(pf, pf.format);
	return (pf.len);
}

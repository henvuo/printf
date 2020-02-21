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

#include "ft_printf.h"

void	ft_parse(t_printf *pf)
{
//    printf("%s", pf->format);
	//while (pf->format)
        while (pf->format[pf->buff_i] != '\0')
	{
		if (pf->format[pf->buff_i] == '%' && pf->format[pf->buff_i] + 1 != '%')
		{
                        write(1, " ", pf->buff_i + 2);
	        //  	ft_flags(pf, pf->buff_i);
		}
                else if (pf->format[pf->buff_i] == '-')
		{
		}
		
		write(1, &pf->format[pf->buff_i], 1);
                pf->buff_i++;
	//	++pf->format;
	}
}

int		ft_printf(const char *format, ...)
{
	t_printf *pf;
        if (!(pf = (t_printf*)malloc(sizeof(t_printf))))
            return (0);
//	ft_bzero(&pf, sizeof(pf));
	pf->format = (char*)format;
//	va_start(pf.ap, format);
//	printf("%s", pf->format);
	ft_parse(pf);
        printf("\n");
	return (pf->len);
}

int     main(int argc, char **argv)
{
    if (argc != 2)
        printf("puta");
    else
        return (ft_printf(argv[1]));
}

void        ft_flags(t_printf *pf, int i)
{
    int x;
    if (pf->format[i + 1] == '.')
    {
        pf->padding = pf->format[i + 2];
        x = pf->format[i + 2];
        write(1, " ", x);
    }
}

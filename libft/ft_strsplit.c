/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:06:48 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/27 11:50:26 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	x;
	unsigned int	y;
	char			**ret;

	y = 0;
	if (s == NULL)
		return (NULL);
	if (!(ret = (char**)malloc(sizeof(char*) * ft_wcount(s, c))))
		return (NULL);
	while (*s != 0)
	{
		x = 0;
		while (s[x] != c && s[x] != 0)
			x++;
		if (x)
		{
			ret[y++] = ft_strncpy(ft_strnew(x), s, x);
			s = s + x;
		}
		else
			s++;
	}
	ret[y] = NULL;
	return (ret);
}

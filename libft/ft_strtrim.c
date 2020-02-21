/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:10:35 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/18 16:48:15 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	b;
	size_t	e;
	char	*ret;

	b = 0;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	e = (ft_strlen(s) - 1);
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
		e--;
	if (e < b)
		e = b;
	e = (e == b) ? e : e + 1;
	ret = ft_strsub(s, b, e - b);
	if (!ret)
	{
		ret = ft_memalloc(1);
		return (ret);
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:14:35 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/14 15:41:02 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t x;

	x = 0;
	while (src[x] && x < len)
	{
		dst[x] = src[x];
		x++;
	}
	while (x < len)
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}

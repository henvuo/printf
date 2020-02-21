/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:43:02 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/13 15:43:55 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	if (n == 0)
		return (0);
	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x] && x < n - 1)
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

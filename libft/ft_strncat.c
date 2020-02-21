/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eft_strncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 01:47:14 by hvuorine          #+#    #+#             */
/*   Updated: 2019/12/09 15:15:15 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)s2;
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (ptr[j] && j < n)
		s1[i++] = ptr[j++];
	s1[i] = '\0';
	return (s1);
}

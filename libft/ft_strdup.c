/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:28:53 by hvuorine          #+#    #+#             */
/*   Updated: 2019/12/09 15:52:05 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i])
		++i;
	if (!(dup = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s1[j])
	{
		dup[j] = s1[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

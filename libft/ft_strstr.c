/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 03:06:32 by hvuorine          #+#    #+#             */
/*   Updated: 2019/12/09 15:08:42 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	n_len;
	char	*ptr_h;

	n_len = ft_strlen(needle);
	ptr_h = (char *)haystack;
	if (!*needle)
		return ((char *)haystack);
	while (*ptr_h)
	{
		if (*ptr_h == *needle)
		{
			if (ft_strncmp(needle, ptr_h, n_len) == 0)
				return (ptr_h);
		}
		ptr_h++;
	}
	return (NULL);
}

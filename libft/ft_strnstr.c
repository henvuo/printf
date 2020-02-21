/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 03:06:32 by hvuorine          #+#    #+#             */
/*   Updated: 2019/11/18 16:47:37 by hvuorine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		h1;
	size_t		h2;
	size_t		n1;
	size_t		n2;

	if (*needle == '\0')
		return ((char *)haystack);
	h1 = 0;
	n1 = 0;
	while (*(haystack + h1) && h1 < len)
	{
		h2 = h1;
		n2 = n1;
		while (*(needle + n2) && *(haystack + h2)
				== *(needle + n2) && h1 + n2 < len)
		{
			h2++;
			n2++;
		}
		if (*(needle + n2) == '\0')
			return ((char *)(haystack + h1));
		h1++;
	}
	return (NULL);
}

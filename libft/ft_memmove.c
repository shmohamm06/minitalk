/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:10:23 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/20 10:28:42 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	dest = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	if (dest < src)
	{
		while (n--)
			*dest++ = *src++;
	}
	else if (dest > src)
	{
		dest += n;
		src += n;
		while (n--)
			*(--dest) = *(--src);
	}
	return (s1);
}

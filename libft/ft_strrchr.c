/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:11:53 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/19 11:53:26 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*abc;

	uc = (unsigned char)c;
	abc = NULL;
	while (*s)
	{
		if (*s == uc)
			abc = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (abc);
}

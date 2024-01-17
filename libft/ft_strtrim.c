/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:38:21 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/23 08:31:33 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setchar(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		set = "";
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && setchar(s1[start], set))
		start++;
	while (end >= start && setchar(s1[end], set))
		end--;
	len = end - start + 1;
	if (len <= 0)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}

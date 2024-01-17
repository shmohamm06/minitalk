/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:10:07 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/16 12:29:30 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	ft_wordlength(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
		{
			word_len = ft_wordlength(s, c);
			str[i++] = ft_substr(s, 0, word_len);
			s = s + word_len;
		}
	}
	str[i] = NULL;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:48:29 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/20 10:17:27 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(int n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*ptr;
	int				i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	i = len - 1;
	while (n >= 10)
	{
		ptr[i] = ('0' + (n % 10));
		n = n / 10;
		i--;
	}
	ptr[i] = (n + '0');
	return (ptr);
}

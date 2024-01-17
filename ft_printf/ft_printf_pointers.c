/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:53:11 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/29 11:48:45 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer(unsigned long p)
{
	char	str[25];
	char	*base_char;
	int		i;
	int		j;

	i = 0;
	base_char = "0123456789abcdef";
	write(1, "0x", 2);
	if (p == 0)
	{
		ft_putchar('0');
		return (3);
	}
	while (p != 0)
	{
		str[i] = base_char[p % 16];
		p = p / 16;
		i++;
	}
	j = i;
	while (i--)
		ft_putchar(str[i]);
	return (j + 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimals.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:41:31 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/29 11:25:57 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	decimal(int d)
{
	int	i;
	int	j;

	i = 0;
	ft_putnbr(d);
	if (d == 0)
		return (1);
	if (d < 0)
	{
		d = -d;
		i++;
	}
	j = d;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

int	unsigneddecimal(unsigned int d)
{
	int	i;

	i = 0;
	ft_putnbrunsigned(d);
	if (d == 0)
		return (1);
	while (d != 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

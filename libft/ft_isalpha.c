/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:09:08 by shmohamm          #+#    #+#             */
/*   Updated: 2023/11/14 11:12:12 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

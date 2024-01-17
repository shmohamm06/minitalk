/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:09:00 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/22 17:04:58 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalbytes;

	if (size != 0 && count > UINT32_MAX / size)
		return (NULL);
	totalbytes = count * size;
	ptr = malloc(totalbytes);
	if (ptr != NULL)
		ft_bzero(ptr, totalbytes);
	return (ptr);
}

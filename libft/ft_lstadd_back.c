/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:43:12 by shmohamm          #+#    #+#             */
/*   Updated: 2023/07/19 14:32:36 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new != NULL)
	{
		last = *lst;
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:51:53 by shmohamm          #+#    #+#             */
/*   Updated: 2023/12/13 11:40:05 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <signal.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_globalmessage
{
	int	c;
	int	i;
}		t_globalmessage;

size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbrunsigned(unsigned long int n);
void	ft_putstr(char *str);

int		hexlow(unsigned int x);
int		hexupp(unsigned int x);
int		decimal(int d);
int		unsigneddecimal(unsigned int d);
int		string(char *str);
int		charpointer(char c);
int		pointer(unsigned long p);
int		ft_printf(const char *str, ...);

#endif
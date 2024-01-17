/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:06:41 by shmohamm          #+#    #+#             */
/*   Updated: 2023/12/30 09:32:25 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

void	args_check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Invalid number of arguments\n");
		exit(1);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i++]) || ft_strlen(argv[1]) > 31)
		{
			ft_printf("Invalid PID\n");
			exit(1);
		}
	}
	if (*argv[2] == 0)
	{
		ft_printf("Empty message\n");
		exit(1);
	}
}

static void	confirm(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("Char received!\n", 1);
	else
		ft_printf("Char received!\n", 1);
}

void	send_bits(int pid, char character)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((character & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	i = 0;
	args_check(argc, argv);
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		signal(SIGUSR1, confirm);
		signal(SIGUSR2, confirm);
		send_bits(pid, argv[2][i]);
		i++;
	}
	send_bits(pid, '\n');
	usleep(500);
}

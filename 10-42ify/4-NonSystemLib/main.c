/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:02:22 by Nathanael         #+#    #+#             */
/*   Updated: 2022/09/04 14:17:02 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void	uselibft(void)
{
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("Testing libft\n", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("ft_putchar_fd: ", 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Hello World!", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Length of Hello: ", 1);
	ft_putnbr_fd(ft_strlen("Hello"), 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	uselibft();
	return (0);
}

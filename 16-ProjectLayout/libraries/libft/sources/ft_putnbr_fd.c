/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:33:23 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 23:27:57 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_putstr_fd - Writes an integer to the given file descriptor.
PARAMETERS
	1.	The integer to output.
	2.	The file descriptor on which to write.
DESCRIPTION
	Outputs the integer 'n' to the given file descriptor.
RETURN VALUES
	Does not return anything.
EXPLAINATION
	Uses the putstr function (using itoa to convet n to a string value) to
	output the (now) string representation of n to the file descriptor fd.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	*conv;

	conv = ft_itoa(n);
	ft_putstr_fd(conv, fd);
	free(conv);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:33:13 by nervin            #+#    #+#             */
/*   Updated: 2021/09/12 23:52:36 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_putstr_fd - Write a string to a file.
PARAMETERS
	1.	The string to output.
	2.	The file descriptor on which to write.
DESCRIPTION
	Outputs the string 's' to the given file descriptor followed by newline.
RETURN VALUES
	Does not return anything.
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

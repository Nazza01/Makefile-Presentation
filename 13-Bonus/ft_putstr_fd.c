/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:33:32 by nervin            #+#    #+#             */
/*   Updated: 2021/09/26 14:03:54 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_putstr_fd - Write a string to a file.
PARAMETERS
	1.	The string to output
	2.	The file descriptor on which to write.
DESCRIPTION
	Outputs the string 's' to the given file descriptor fd.
RETURN VALUES
	Does not return anything.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

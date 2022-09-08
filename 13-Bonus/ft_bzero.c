/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:53:43 by nervin            #+#    #+#             */
/*   Updated: 2021/09/14 23:32:45 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_bzero - zero a byte string
PARAMETERS
	1.	The memory area to be written over.
	2.	The amount of memory to be overwritten.
DESCRIPTION
	Erases the data in the n bytes of memory starting at the location pointed to
	by s, by writing zeros (bytes containing '\0') to that area.
RETURN VALUES
	None.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
		dest[i++] = 0;
}

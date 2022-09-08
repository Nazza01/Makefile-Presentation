/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:07 by nervin            #+#    #+#             */
/*   Updated: 2021/09/16 16:54:01 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_memchr - scan memory for a character
PARAMETERS
	1.	The memory area to be scanned
	2.	The character to search for
	3.	The amount of memory to scan
DESCRIPTION
	Scans the initial n bytes of the memory area pointed to by s for the
	first instance of c. Both c and the bytes of memory area pointed to by s are
	interpreted as unsigned char.
RETURN VALUE
	Returns a pointer to the matching byte or NULL if the character does not
	occur in the given memory area
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*strptr;
	unsigned char	chr;

	i = 0;
	strptr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (strptr[i] == chr)
			return ((void *)strptr + i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:21 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_memmove
PARAMETERS
	1.	The destination memory area to copy to.
	2.	The source memory area to copy from.
	3.	The amount of bytes to copy.
RETURN VALUES
	Returns a pointer to dest.
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Copies len bytes from memory area src to memory area dst. The memory areas
	may overlap - copying takes place as though the bytes in src are first
	copied into a temporary array that does not overlap src or dst, and the
	bytes are then copied from the tempoaray array to dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (d == s || len == 0)
		return (dst);
	else if (d < s)
		return (ft_memcpy(dst, src, len));
	else if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		while (i++ < len)
			d[i] = s[i];
	return (dst);
}

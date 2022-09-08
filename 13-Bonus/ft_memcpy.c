/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:15 by nervin            #+#    #+#             */
/*   Updated: 2021/09/10 13:31:11 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Copies n bytes from memory area src to memory area dest. The memory areas
	must not overlap.
RETURN VALUE
	Returns a pointer to dest
*/
void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (d);
}

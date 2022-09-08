/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:24 by nervin            #+#    #+#             */
/*   Updated: 2021/09/10 18:49:10 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
	Fills the first n bytes of the memory area pointed to by s with the constant
	byte c
RETURN VALUES
	Returns a pointer to the memory area s
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*set;
	unsigned char	chr;

	i = 0;
	set = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		set[i] = chr;
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:11 by nervin            #+#    #+#             */
/*   Updated: 2021/09/16 22:21:21 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_memcmp - compare memory ares
PARAMETERS
	1.	First memory area to compare
	2.	Second memory area to compare
	3.	Amount of memory to compare for.
DESCRIPTION
	Compares the first n bytes of the memory areas s1 and s2
RETURN VALUE
	Returns an integer less than, equal to or greater than zero if the first n
	bytes of s1 is found, respectively, to be less than, to match, or be greater
	than the first n bytes of s2.
	For a nonzero return value, the sign is determined by the sign of the diffe-
	rance between the first pair of bytes (interpreted as unsigned char) that
	differ in s1 and s2.
	If n is zero, the return value is zero.
EXPLAINATION
	Iterate through both memory areas, if they don't equal each other, return 
	the difference between them. Otherwise iterate through.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*smem1;
	unsigned char	*smem2;

	smem1 = (unsigned char *)s1;
	smem2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (smem1[i] != smem2[i])
			return (smem1[i] - smem2[i]);
		i++;
	}
	return (0);
}

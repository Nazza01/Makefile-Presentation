/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:55 by nervin            #+#    #+#             */
/*   Updated: 2021/09/30 09:45:34 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_calloc - allocate and free dynamic memory
PARAMETERS
	1.	The size of the array.
	2.	The size of each byte.
DESCRIPTION
	Allocates memory for an array of nmemb elements of size bytes each and
	returns a pointer to the allocated memory. The memory is set to zero. If
	nmemb or size is 0, then calloc() returns either NULL, or a unique pointer
	value that can be successfully passed to free().
RETURN VALUES
	Returns a pointer to the allocated memory. Upon error, the functions return
	NULL. NULL may also be a successful call to calloc with nmemb or size being
	equal to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size * nmemb);
	return (memory);
}

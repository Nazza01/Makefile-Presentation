/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:55 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 23:25:01 by Nathanael        ###   ########.fr       */
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
	if (!memory || nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ft_memset(memory, 0, size * nmemb);
	return (memory);
}

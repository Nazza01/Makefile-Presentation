/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:53:43 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
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
void	ft_bzero(void *s, size_t l)
{
	ft_memset(s, 0, l);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:37:13 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strlcpy
PARAMETERS
	1.	Destination string to copy to.
	2.	Source string to copy from.
	3.	Size to copy for.
RETURN VALUES
	Returns the length of the completed string
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Copies the source string to the destination string for size characters.
EXPLAINATION
	Check the dest and src strings if they are null, return a length of 0.
	If the size is greater than 0, we iterate and copy the string from 
	's' the temporary varaible holding the contents of src, to dest, appending
	null terminating character.
	If the src varaiable is null, we increment through s.
	The result is the subtraction of s - src gives the length of the new string
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*s;

	s = src;
	if (!dest || !src)
		return (0);
	if (size != 0)
	{
		while (*s != '\0' && --size)
		{
			*dest = *s;
			dest++;
			s++;
		}
		*dest = '\0';
	}
	while (*s != '\0')
		s++;
	return (s - src);
}

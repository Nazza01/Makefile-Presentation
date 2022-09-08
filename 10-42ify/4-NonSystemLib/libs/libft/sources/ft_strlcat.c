/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:37:04 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strlcat
PARAMETERS
	1.	The destination to copy to.
	2.	The source to copy from.
	3.	The amount of characters to copy over.
RETURN VALUES
	Returns the total length of the string it tried to create. Initial length
	of dst plus length of src.
DESCRIPTION
	Append the string src to the dest variable for size characters.
EXPLAINATION
	Get the length of both dest and src. Compare the dest's length with size,
	If it's greater than or equal to size, we return the summation of the passed
	size and src's length.
	Iterate through src and while dest's length & iter is less than size - 1
	We want to assign the destination string at the end of the string for each
	time it goes through and append src at the end of the string.
	Until we hit the end of the string we increment i.
	Append a null terminating character at the end of the new string.
	Return the length of the new string created.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d >= size)
		return (size + s);
	while ((src[i] != '\0') && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

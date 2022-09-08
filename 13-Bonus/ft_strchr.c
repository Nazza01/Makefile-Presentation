/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:56 by nervin            #+#    #+#             */
/*   Updated: 2021/09/26 12:48:12 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strchr
PARAMETERS
	1.	Word to search for the character in.
	2.	Character to find.
RETURN VALUES
	Returns a pointer to the first occurence of the character.
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Locates the character chr in the string str.
EXPLAINATION
	We want to iterate through the string and if we find the character in the 
	string we want to return the point at which we found it.
	If we can't find the character we keep iterating through the string until
	it is not found.
	If the character cannot be found then we return NULL
	If the character and the string are both NULL we return a pointer to the
	string.
	Otherwise we return NULL.
*/
char	*ft_strchr(const char *str, int chr)
{
	while (*str != '\0')
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if (chr == '\0' && *str == '\0')
		return ((char *)str);
	return (NULL);
}

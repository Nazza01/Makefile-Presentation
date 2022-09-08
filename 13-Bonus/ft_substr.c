/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:15 by nervin            #+#    #+#             */
/*   Updated: 2021/10/02 23:49:38 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_substr - Creates a substring, assigns it using malloc and returns it.
PARAMETERS
	1.	The string of which to create the substring.
	2.	The start index of the substring in the string 's'.
	3.	The maximum length of the substring.
DESCRIPTION
	Allocates (with malloc(3)) and returns a substring from the string 's'.
	The substring begins at index 'start' and is of maximum size 'len'.
RETURN VALUES
	The substring. NULL if the allocation fails.
EXPLAINATION
	If the string is null, return null.
	If the length of the string is less than the start of the string to create,
	return an empty string.
	Malloc for the substring leaving space for the null terminating char.
	If the memory could not be allocated, we return null.
	We want to copy the new substring to the string s starting from the start
	position. For len + 1 characters.
	Return the new string.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

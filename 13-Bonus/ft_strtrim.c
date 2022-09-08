/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:09 by nervin            #+#    #+#             */
/*   Updated: 2021/09/19 23:52:04 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
NAME
	ft_strtrim - Removes certain character from a string
PARAMETERS
	1.	The string to be trimmed.
	2.	The reference set of characters to trim.
DESCRIPTION
	Allocates (with malloc(3)) and returns a copy of 's1' with the characters
	specified in 'set' removed from the beginning and the end of the string.
RETURN VALUES
	The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
		while (s1[end + start - 1] != 0 && ft_strchr(set, s1[end + start - 1])
			!= 0)
			end--;
	res = malloc(sizeof(char) * end + 1);
	if (res == NULL)
		return (NULL);
	ft_strncpy(res, s1 + start, end);
	res[end] = '\0';
	return (res);
}

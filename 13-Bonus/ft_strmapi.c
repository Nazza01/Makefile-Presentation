/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:04 by nervin            #+#    #+#             */
/*   Updated: 2021/09/12 23:23:00 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strmapi - Iterates through a string and applies a passed function to the 
	string.
PARAMETERS
	1.	The string on which to iterate.
	2.	The function to apply to each character.
DESCRIPTION
	Applies the function 'f' to each character of the string 's' to create a new
	string (with malloc(3)) resulting from succesive applications of 'f'.
RETURN VALUES
	The string create from the successive applications of 'f'. Returns NULL if
	the allocation fails.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	int		len;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = (f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

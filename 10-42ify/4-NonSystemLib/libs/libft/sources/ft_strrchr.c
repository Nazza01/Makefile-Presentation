/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:37:52 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strrchr
	Locates the character chr in the string str
NAME
	ft_strrchr
PARAMETERS
	1.	The string to search the character in.
	2.	The character to search for.
RETURN VALUES
	Returns a pointer to the last occurence of the character chr in the string s 
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Searches for chr in the string str at the last occurence.
EXPLAINATION
*/
char	*ft_strrchr(const char *str, int chr)
{
	size_t		l;
	char		c;
	char		*s;

	l = ft_strlen(str);
	c = (char)chr;
	s = (char *)str;
	if (c == '\0')
		return (s + l);
	while (l > 0)
	{
		l--;
		if (s[l] == c)
			return (s + l);
	}
	return (NULL);
}

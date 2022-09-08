/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:09 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	inset(const char c, const char *set)
{
	int	i;
	int	setlen;

	i = 0;
	setlen = ft_strlen(set);
	while (i < setlen)
	{
		if (c == set[i])
			return (true);
		i++;
	}
	return (false);
}

char	*badinputs(const char *str, const char *set)
{
	if (!set)
		return (ft_strdup(str));
	return (NULL);
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
	char	*ptr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (badinputs(s1, set));
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && inset(s1[start], set))
		start++;
	while (end > start && inset(s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	while (start + i < end)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:37:44 by nervin            #+#    #+#             */
/*   Updated: 2021/09/18 18:29:46 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strncmp
PARAMETERS
	1.	First string to compare.
	2.	Second string to compare.
	3.	Amount of characters to compare for.
RETURN VALUES
	Returns an integer less than, equal to, or greater than zero if the first
	n bytes of s1 is found, respectively to be less than, to match or be greater
	than s2.
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Compares the first n bytes of two strings, s1 and s2.
EXPLAINATION
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*k;

	i = 0;
	s = (unsigned char *)s1;
	k = (unsigned char *)s2;
	while (s[i] == k[i] && i < n && s[i] != '\0' && k[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s[i] - k[i]);
}

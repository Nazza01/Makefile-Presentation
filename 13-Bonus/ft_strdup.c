/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:01 by nervin            #+#    #+#             */
/*   Updated: 2021/09/30 09:48:37 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strdup takes in a string as an argument.
It will attempt to memory allocate using a char malloc.
If malloc cannot assign enough memory or the string is empty ft_strdup will 
return a NULL pointer and exit.
Will assign a temp variable to the source and increment until the null char.
Assigns a null terminating character to the end of the temp string.
Returns the temp variable which is either filled up, or null.
*/
char	*ft_strdup(const char *s)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(const char) * (ft_strlen(s) + 1));
	if (temp == NULL || s == NULL)
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			temp[i] = s[i];
			i++;
		}
		temp[i] = '\0';
	}
	return (temp);
}

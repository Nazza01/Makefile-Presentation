/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:33:41 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strcount
PARAMETERS
	1.	The string to count for.
	2.	The characters to count.
RETURN VALUES
	The amount of times the character was found in the string.
EXTERNAL FUNCTS.
	None.
EXPLANATION/DESCRIPTION
	Takes in a string to search through and find the amount of times c occurs in
	str. Sets a flag and uses that for tracking if the character was found
*/
static int	ft_strcount(const char *str, char chr)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != chr && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == chr)
			flag = 0;
		str++;
	}
	return (count);
}

/*
NAME
	ft_worddup
PARAMETERS
	1.	The string to duplicate.
	2.	Where to start the duplication.
	3.	Where to end the duplication.
RETURN VALUES
	Returns the duplicated word
EXTERNAL FUNCTS.
	malloc
EXPLAINATION
	Uses malloc(3) to assign memory for the final word.
	While the start is less than the finish, we want to duplicate the word.
	Increment the index and the start values to do the copy.
	Once the word has been duplicated we want to assign the null terminating 
	char and return the word. In the instance that malloc cannot assign memory,
	the return value will be NULL.
*/
static char	*ft_worddup(const char *str, int start, int finish)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

/*
NAME
	ft_split - Splits a string using a delimiting character.
PARAMETERS
	1.	The string to be split.
	2.	The delimiter character.
RETURN VALUES
	The array of new strings resulting from the split. NULL if the allocation
	fails.
INTERNAL FUNCTS.
	ft_strcount, ft_wordalloc 
EXTERNAL FUNCTS.
	malloc, free
DESCRIPTION
	Allocates (with malloc(3)) and returns an array of strings obtained by 
	splitting 's' using the character 'c' as the delimiter. The array must be 
	ended by a NULL pointer.
EXPLAINATION
	Assigns memory using the function included above (strcounts) for the final
	string to be returned. If the string passed through or if malloc cannot
	assign memory then the result will be NULL.
	While all of the following are true;
		index is equal to or greater than 0
		the current character of the string is equal to the character to find
		OR
		the i variable is equal to the length of the string
	We want to start building the splitted result, we use the above ft_worddup 
	function to help build it using the string, ind variable and i as well.
	Iterate through the whole string so we can create the finished result.
	Append null at the end so we don't encounter any seg faults.
	Return the split string.
*/
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	int		ind;
	char	**res;

	i = 0;
	k = 0;
	ind = -1;
	res = malloc((ft_strcount(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && ind < 0)
			ind = i;
		else if (ind >= 0 && (s[i] == c || i == ft_strlen(s)))
		{
			res[k++] = ft_worddup(s, ind, i);
			ind = -1;
		}
		i++;
	}
	res[k] = NULL;
	return (res);
}

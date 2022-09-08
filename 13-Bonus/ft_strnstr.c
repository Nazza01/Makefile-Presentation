/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:16:04 by nervin            #+#    #+#             */
/*   Updated: 2021/09/18 23:41:10 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_strnstr
PARAMETERS
	1.	Sentence to search the word for.
	2.	Word to find in the sentence.
	3.	Amount of characters to search for.
RETURN VALUES
	If word is an empty string, sentence is returned. 
	If little occurs nowhere in big, NULL is returned.
	Otherwise a pointer to the first character of the first occurrence of word 
	is returned.
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Locates the first occurrence of the null terminated string word in the 
	string sentence for no more than len characters. Characters after '\0' are 
	not searched.
EXPLAINATION

*/
char	*ft_strnstr(const char *sentence, const char *word, size_t len)
{
	char	*s;
	char	*w;
	size_t	wordlen;
	size_t	sentlen;

	s = (char *)sentence;
	w = (char *)word;
	wordlen = ft_strlen(w);
	sentlen = ft_strlen(s);
	if (*word == 0)
		return ((char *)sentence);
	else if (wordlen == 0)
		return (w);
	else if (len == 0 || wordlen > sentlen)
		return (NULL);
	while (*s && len--)
	{
		if (len + 1 < wordlen)
			break ;
		if ((*s == *w) && (ft_strncmp(s, w, wordlen) == 0))
			return (s);
		s++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:45 by nervin            #+#    #+#             */
/*   Updated: 2021/09/16 15:42:38 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstiter
PARAMETERS
	1.	The adress of a pointer to an element.
	2.	The adress of the function used to iterate on the list.
RETURN VALUES
	None
EXTERNAL FUNCTIONS.
	None
DESCRIPTION
	Iterates the list 'lst' and applies the function 'f' to the content of each
	element.
EXPLAINATION
	While the list hasn't reached the end, apply the function f to each content
	of each element. Assign the next lst to be the next element to apply the 
	function to the next element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

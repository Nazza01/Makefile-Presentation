/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:24 by nervin            #+#    #+#             */
/*   Updated: 2021/09/19 11:07:23 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstsize
PARAMETERS
	1.	The beginning of the list.
DESCRIPTION
	Counts the number of elements in a list.
RETURN VALUES
	Length of the list.
EXPLAINATION
	We want a temp variable to iterate the linked list without modifying the
	current links. We assign this temp variable to be the list.
	We then iterate through this list, using the temporary variable to reference
	each next link and increment length.
	We then return this length back to the function.
*/
int	ft_lstsize(t_list *list)
{
	size_t	length;
	t_list	*clist;

	length = 0;
	clist = list;
	while (clist != NULL)
	{
		clist = clist->next;
		length++;
	}
	return (length);
}

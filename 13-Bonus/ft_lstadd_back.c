/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:51 by nervin            #+#    #+#             */
/*   Updated: 2021/09/16 13:32:17 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstadd_back
PARAMETERS
	1.	The address of a pointer to the first link of a list.
	2.	The address of a pointer to the element to be added to the list.
DESCRIPTION
	Adds the element ’new’ at the end of the list.
RETURN VALUES
	None.
EXPLAINATION
	Assign a new t_list pointer to iterate through the linked list.
	Check to see if lst is not pointing to NULL
	If it isn't then that means there is more than 1 element in the linked
		list. So we traverse it and re-assign tmp's next element to itself.
		When we've gotten to the last element in the list, assign tmp's next
		element to be the new last element.
	If it is, we can safely assume the list contains only one element so we
		can put new at the back of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst != NULL)
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*lst = new;
}

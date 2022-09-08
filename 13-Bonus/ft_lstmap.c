/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:12 by nervin            #+#    #+#             */
/*   Updated: 2021/10/03 00:13:23 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstmap
PARAMETERS
	1.	The adress of a pointer to an element.
	2.	The adress of the function used to iterate on the list.
	3.	The adress of the function used to delete the content of an element if
			needed.
RETURN VALUES
	The new list. NULL if the allocaton fails.
EXTERNAL FUNCTIONS.
	malloc, free
DESCRIPTION
	Iterates the list 'lst' and applies the function 'f' to the content of each
	element. Creates a new list resulting of the successive applications of the 
	function 'f'. The 'del' function is used to delete the content of an element
	if neeeded.
EXPLANATION
	If the list or the function to apply to the list is null, we want to return
	null to handle this case.
	Assign the result to be null to initialise it.
	While the list is not null, we want to keep going through the list.
	Assign the temporary list and make a new list applying the passed function
	to each content of the list.
	If the new list could not be created, we want to free the memory by passing
	the address of the result list and the deletion function and return null.
	Otherwise, add temp to be the next element of the final result.
	Assign temp's next element so we can assign the linked list.
	Assign lst's next element so we can keep traversing the linked list.
	Once we've gone through the list (in the case that lst isn't NULL), we
	return the final result.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:59 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstclear
PARAMETERS
	1.	The address of a pointer to an element.
	2.	The address of the function used to delete the content of the element.
RETURN VALUES
	None.
EXTERNAL FUNCTIONS.
	free.
DESCRIPTION
	Deletes and frees the given element and every successor of that element,
	using the function 'del' and free(3). Finally, the pointer to the list must
	be set to NULL.
EXPLAINATION
While the list is not pointing to null and the pointer to the list is not null
	temporarily assign the variable to the next element of the list
	delete the list using the del function passed through as a parameter
	schedule the next element in the list to be deleted.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst != NULL && *lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

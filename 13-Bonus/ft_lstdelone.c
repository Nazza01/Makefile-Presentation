/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nervin <nervin@student.42adel.org.au >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:03 by nervin            #+#    #+#             */
/*   Updated: 2021/09/16 14:11:44 by nervin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstdelone
PARAMETERS
	1.	The element to free.
	2.	The address of the function used to delete the content.
DESCRIPTION
	Takes as a parameter an element and frees the memory of the element's
	content using the function 'del' given as a parameter and free the element.
	The memory of 'next' must not be freed.
RETURN VALUES
	None.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

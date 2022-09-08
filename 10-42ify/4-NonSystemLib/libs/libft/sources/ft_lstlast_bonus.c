/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:08 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:40:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
	ft_lstlast
PARAMETERS
	1.	The beginning of the list.
DESCRIPTION
	Returns the last element of the list.
	Iterates through the list as long as we don't reach the next element being
	NULL, we traverse the list.
RETURN VALUES
	Last element of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	end = lst;
	if (lst == NULL)
		return (NULL);
	while (end->next != NULL)
		end = end->next;
	return (end);
}

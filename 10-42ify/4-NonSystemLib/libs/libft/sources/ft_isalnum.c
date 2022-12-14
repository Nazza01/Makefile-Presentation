/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:23:47 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 10:38:57 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isalnum takes an integer c, checks if it is between 1..9 or a..z or A..Z
Returns 1 if true, Returns 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if (c < 0)
		return (0);
	return (ft_isalpha(c) || ft_isdigit(c));
}

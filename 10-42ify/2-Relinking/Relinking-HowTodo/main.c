/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:48:18 by Nathanael         #+#    #+#             */
/*   Updated: 2022/09/04 11:50:48 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "another.h"
#include <stdio.h>

//	Uncommenting any line below (besides return 0) will re-compile main.c 
//	while also linking main.o to the final executable and not another.c
int	main(void)
{
	printf("Hello from main\n");
	print_another("Hello from another\n");

	// printf("Relink this!\n");
	return (0);
}

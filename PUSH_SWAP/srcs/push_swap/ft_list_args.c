/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:59:37 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 19:59:38 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// While arguments are valid, we start to add them 
// into stack here one by one with while loop.
// Atoi takes the number and turn it into an integer 
// value where we can make math operations.
// With stack new we create a new node for the current 
// argument without linking it to list.
// We make linking stage in ft_add_back call.
void	list_args(char **argv, t_stack **stack_a)
{
	long	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_add_back(stack_a, ft_stack_new(ft_atoi(argv[i])));
		i++;
	}
}

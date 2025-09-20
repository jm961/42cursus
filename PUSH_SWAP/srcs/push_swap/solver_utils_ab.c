/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:00:45 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 20:23:51 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// This function calculates how many times
// we should rotate the stacks together.
// Because after a certain amoun of rotate, we will
// proceed only with one stack rotation.
int ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

// This function calculates how many times we should rotate the stacks together.
// Because after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is
// calculated by list_size - index_number.
int ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ps_lstsize(b) - ft_find_place_b(b, c);
	if ((i < (ps_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ps_lstsize(a) - ft_find_index(a, c);
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for rra+rb case.
int ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_index(a, c))
		i = ps_lstsize(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for ra+rrb case.
int ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ps_lstsize(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}

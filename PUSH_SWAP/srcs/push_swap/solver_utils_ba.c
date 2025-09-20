/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:00:54 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 20:23:39 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ps_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ps_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ps_lstsize(b) - ft_find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_index(b, c))
		i = ps_lstsize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ps_lstsize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}

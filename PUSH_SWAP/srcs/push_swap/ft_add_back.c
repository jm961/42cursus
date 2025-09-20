/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:58:54 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 20:23:34 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Function to add a new node to the stack from back side
void ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return;
	if (!*stack)
		*stack = stack_new;
	else
		(ps_lstlast(*stack))->next = stack_new;
}

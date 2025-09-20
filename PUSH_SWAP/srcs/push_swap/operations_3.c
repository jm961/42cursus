/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:00:24 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 20:23:51 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// rb (rotate b) : shift up all elements of stack b by 1.
// The first element becomes the last one.
void ft_rb(t_stack **b, int j)
{
	t_stack *tmp;

	if (!*b || !(*b)->next)
		return;
	tmp = *b;
	*b = ps_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

// sb (swap b) : swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements).
void ft_sb(t_stack **b, int j)
{
	t_stack *tmp;

	if (!*b || !((*b)->next))
		return;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}

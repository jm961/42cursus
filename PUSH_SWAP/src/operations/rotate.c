/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void rotate(t_stack **stack)
{
    t_stack *first;
    t_stack *last;

    if (!*stack || !(*stack)->next)
        return;
    first = *stack;
    last = stack_get_last(*stack);
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}

void ra(t_stack **stack_a, int i)
{
    rotate(stack_a);
    if (i == 1)
        ft_printf("ra\n");
}

void rb(t_stack **stack_b, int i)
{
    rotate(stack_b);
    if (i == 1)
        ft_printf("rb\n");
}

void rr(t_stack **stack_a, t_stack **stack_b, int i)
{
    rotate(stack_a);
    rotate(stack_b);
    if (i == 1)
        ft_printf("rr\n");
}

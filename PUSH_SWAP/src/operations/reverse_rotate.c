/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void reverse_rotate(t_stack **stack)
{
    t_stack *last;
    t_stack *second_last;

    if (!*stack || !(*stack)->next)
        return;
    last = stack_get_last(*stack);
    second_last = *stack;
    while (second_last->next != last)
        second_last = second_last->next;
    second_last->next = NULL;
    last->next = *stack;
    *stack = last;
}

void rra(t_stack **stack_a, int i)
{
    reverse_rotate(stack_a);
    if (i == 1)
        ft_printf("rra\n");
}

void rrb(t_stack **stack_b, int i)
{
    reverse_rotate(stack_b);
    if (i == 1)
        ft_printf("rrb\n");
}

void rrr(t_stack **stack_a, t_stack **stack_b, int i)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    if (i == 1)
        ft_printf("rrr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void swap(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if (!*stack || !(*stack)->next)
        return;
    first = *stack;
    second = (*stack)->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void sa(t_stack **stack_a, int i)
{
    swap(stack_a);
    if (i == 1)
        ft_printf("sa\n");
}

void sb(t_stack **stack_b, int i)
{
    swap(stack_b);
    if (i == 1)
        ft_printf("sb\n");
}

void ss(t_stack **stack_a, t_stack **stack_b, int i)
{
    swap(stack_a);
    swap(stack_b);
    if (i == 1)
        ft_printf("ss\n");
}

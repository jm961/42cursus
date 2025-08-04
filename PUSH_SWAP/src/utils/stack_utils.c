/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack *stack_new(int value)
{
    t_stack *new_node;

    new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
        return (NULL);
    new_node->value = value;
    new_node->index = 0;
    new_node->position = 0;
    new_node->target_position = 0;
    new_node->cost_a = 0;
    new_node->cost_b = 0;
    new_node->next = NULL;
    return (new_node);
}

void stack_add_bottom(t_stack **stack, t_stack *new_node)
{
    t_stack *last;

    if (!*stack)
    {
        *stack = new_node;
        return;
    }
    last = stack_get_last(*stack);
    last->next = new_node;
}

t_stack *stack_get_last(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

int stack_size(t_stack *stack)
{
    int size;

    size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}

void stack_free(t_stack **stack)
{
    t_stack *tmp;

    if (!*stack)
        return;
    while (*stack)
    {
        tmp = *stack;
        *stack = (*stack)->next;
        free(tmp);
    }
}

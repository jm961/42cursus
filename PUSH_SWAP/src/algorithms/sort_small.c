/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void sort_three(t_stack **stack)
{
    int first;
    int second;
    int third;

    first = (*stack)->value;
    second = (*stack)->next->value;
    third = (*stack)->next->next->value;
    if (first > second && second < third && first < third)
        sa(stack, 1);
    else if (first > second && second > third)
    {
        sa(stack, 1);
        rra(stack, 1);
    }
    else if (first > second && second < third && first > third)
        ra(stack, 1);
    else if (first < second && second > third && first < third)
    {
        sa(stack, 1);
        ra(stack, 1);
    }
    else if (first < second && second > third && first > third)
        rra(stack, 1);
}

static int find_min_index(t_stack *stack)
{
    int min_value;
    int min_index;
    int index;

    min_value = stack->value;
    min_index = 0;
    index = 0;
    while (stack)
    {
        if (stack->value < min_value)
        {
            min_value = stack->value;
            min_index = index;
        }
        stack = stack->next;
        index++;
    }
    return (min_index);
}

void sort_small(t_stack **stack_a, t_stack **stack_b)
{
    int size;
    int min_index;

    while (stack_size(*stack_a) > 3)
    {
        size = stack_size(*stack_a);
        min_index = find_min_index(*stack_a);
        if (min_index <= size / 2)
        {
            while (min_index--)
                ra(stack_a, 1);
        }
        else
        {
            while (min_index++ < size)
                rra(stack_a, 1);
        }
        pb(stack_a, stack_b, 1);
    }
    sort_three(stack_a);
    while (*stack_b)
        pa(stack_a, stack_b, 1);
}

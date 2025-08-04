/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void assign_index(t_stack **stack)
{
    t_stack *current;
    t_stack *compare;
    int index;

    current = *stack;
    while (current)
    {
        index = 0;
        compare = *stack;
        while (compare)
        {
            if (compare->value < current->value)
                index++;
            compare = compare->next;
        }
        current->index = index;
        current = current->next;
    }
}

void assign_position(t_stack **stack)
{
    t_stack *current;
    int position;

    current = *stack;
    position = 0;
    while (current)
    {
        current->position = position;
        current = current->next;
        position++;
    }
}

void assign_target_position(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current_b;
    t_stack *current_a;
    int target_pos;
    int target_index;

    current_b = *stack_b;
    assign_position(stack_a);
    assign_position(stack_b);
    while (current_b)
    {
        target_pos = INT_MAX;
        target_index = INT_MAX;
        current_a = *stack_a;
        while (current_a)
        {
            if (current_a->index > current_b->index && current_a->index < target_index)
            {
                target_index = current_a->index;
                target_pos = current_a->position;
            }
            current_a = current_a->next;
        }
        if (target_index == INT_MAX)
        {
            current_a = *stack_a;
            while (current_a)
            {
                if (current_a->index < target_index)
                {
                    target_index = current_a->index;
                    target_pos = current_a->position;
                }
                current_a = current_a->next;
            }
        }
        current_b->target_position = target_pos;
        current_b = current_b->next;
    }
}

void calculate_cost(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current_b;
    int size_a;
    int size_b;

    current_b = *stack_b;
    size_a = stack_size(*stack_a);
    size_b = stack_size(*stack_b);
    while (current_b)
    {
        current_b->cost_b = current_b->position;
        if (current_b->position > size_b / 2)
            current_b->cost_b = (size_b - current_b->position) * -1;
        current_b->cost_a = current_b->target_position;
        if (current_b->target_position > size_a / 2)
            current_b->cost_a = (size_a - current_b->target_position) * -1;
        current_b = current_b->next;
    }
}

void execute_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current;
    t_stack *cheapest;
    int cheapest_cost;
    int cost;

    current = *stack_b;
    cheapest_cost = INT_MAX;
    while (current)
    {
        cost = abs(current->cost_a) + abs(current->cost_b);
        if (cost < cheapest_cost)
        {
            cheapest_cost = cost;
            cheapest = current;
        }
        current = current->next;
    }
    // Execute moves for cheapest node
    while (cheapest->cost_a != 0 && cheapest->cost_b != 0)
    {
        if ((cheapest->cost_a > 0 && cheapest->cost_b > 0))
        {
            rr(stack_a, stack_b, 1);
            cheapest->cost_a--;
            cheapest->cost_b--;
        }
        else if (cheapest->cost_a < 0 && cheapest->cost_b < 0)
        {
            rrr(stack_a, stack_b, 1);
            cheapest->cost_a++;
            cheapest->cost_b++;
        }
        else
            break;
    }
    while (cheapest->cost_a > 0)
    {
        ra(stack_a, 1);
        cheapest->cost_a--;
    }
    while (cheapest->cost_a < 0)
    {
        rra(stack_a, 1);
        cheapest->cost_a++;
    }
    while (cheapest->cost_b > 0)
    {
        rb(stack_b, 1);
        cheapest->cost_b--;
    }
    while (cheapest->cost_b < 0)
    {
        rrb(stack_b, 1);
        cheapest->cost_b++;
    }
    pa(stack_a, stack_b, 1);
}

void sort_large(t_stack **stack_a, t_stack **stack_b)
{
    int size;
    int pushed;

    size = stack_size(*stack_a);
    pushed = 0;
    while (pushed < size / 2)
    {
        if ((*stack_a)->index < size / 2)
        {
            pb(stack_a, stack_b, 1);
            pushed++;
        }
        else
            ra(stack_a, 1);
    }
    while (stack_size(*stack_a) > 3)
        pb(stack_a, stack_b, 1);
    sort_three(stack_a);
    while (*stack_b)
    {
        assign_target_position(stack_a, stack_b);
        calculate_cost(stack_a, stack_b);
        execute_cheapest_move(stack_a, stack_b);
    }
    if (!is_sorted(*stack_a))
    {
        assign_position(stack_a);
        while ((*stack_a)->index != 0)
        {
            if ((*stack_a)->position <= stack_size(*stack_a) / 2)
                ra(stack_a, 1);
            else
                rra(stack_a, 1);
            assign_position(stack_a);
        }
    }
}

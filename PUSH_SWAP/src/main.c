/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 05:14:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    char **split_args;

    if (argc < 2)
        return (0);
    if (argc == 2)
    {
        split_args = ft_split(argv[1], ' ');
        if (!split_args || !split_args[0] || !is_valid_split_input(split_args))
        {
            free_split(split_args);
            error_exit();
        }
        stack_a = parse_split_input(split_args);
        free_split(split_args);
    }
    else
    {
        if (!is_valid_input(argv))
            error_exit();
        stack_a = parse_input(argc, argv);
    }
    if (!stack_a || has_duplicates(stack_a))
    {
        stack_free(&stack_a);
        error_exit();
    }
    if (is_sorted(stack_a))
    {
        stack_free(&stack_a);
        return (0);
    }
    stack_b = NULL;
    assign_index(&stack_a);
    push_swap(&stack_a, &stack_b);
    stack_free(&stack_a);
    stack_free(&stack_b);
    return (0);
}

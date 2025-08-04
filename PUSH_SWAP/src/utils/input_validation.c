/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 15:28:48 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int is_valid_number(char *str)
{
    int i;
    int len;

    i = 0;
    if (!str || !str[0])
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    len = 0;
    while (str[i + len])
    {
        if (!ft_isdigit(str[i + len]))
            return (0);
        len++;
    }
    if (len > 10)
        return (0);
    if (len == 10)
    {
        if (str[0] == '-' && ft_strncmp(str + 1, "2147483648", 10) > 0)
            return (0);
        if (str[0] != '-' && ft_strncmp(str, "2147483647", 10) > 0)
            return (0);
    }
    return (1);
}

int is_valid_input(char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        if (!is_valid_number(argv[i]))
            return (0);
        i++;
    }
    return (1);
}

int has_duplicates(t_stack *stack)
{
    t_stack *current;
    t_stack *check;

    current = stack;
    while (current)
    {
        check = current->next;
        while (check)
        {
            if (current->value == check->value)
                return (1);
            check = check->next;
        }
        current = current->next;
    }
    return (0);
}

int is_sorted(t_stack *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}

int is_valid_split_input(char **split_args)
{
    int i;

    if (!split_args)
        return (0);
    i = 0;
    while (split_args[i])
    {
        if (!is_valid_number(split_args[i]))
            return (0);
        i++;
    }
    return (1);
}

void free_split(char **split)
{
    int i;

    if (!split)
        return;
    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

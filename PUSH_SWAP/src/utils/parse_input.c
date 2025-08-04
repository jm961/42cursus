/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 05:14:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int ft_safe_atoi(char *str, int *result)
{
    long num;
    int sign;
    int i;

    num = 0;
    sign = 1;
    i = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        num = num * 10 + (str[i] - '0');
        if ((sign == 1 && num > 2147483647) || (sign == -1 && num > 2147483648))
            return (0);
        i++;
    }
    *result = (int)(num * sign);
    return (1);
}

t_stack *parse_input(int argc, char **argv)
{
    t_stack *stack;
    t_stack *new_node;
    int num;
    int i;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        if (!ft_safe_atoi(argv[i], &num))
        {
            stack_free(&stack);
            return (NULL);
        }
        new_node = stack_new(num);
        if (!new_node)
        {
            stack_free(&stack);
            return (NULL);
        }
        stack_add_bottom(&stack, new_node);
        i++;
    }
    return (stack);
}

t_stack *parse_split_input(char **split_args)
{
    t_stack *stack;
    t_stack *new_node;
    int num;
    int i;

    stack = NULL;
    i = 0;
    while (split_args[i])
    {
        if (!ft_safe_atoi(split_args[i], &num))
        {
            stack_free(&stack);
            return (NULL);
        }
        new_node = stack_new(num);
        if (!new_node)
        {
            stack_free(&stack);
            return (NULL);
        }
        stack_add_bottom(&stack, new_node);
        i++;
    }
    return (stack);
}
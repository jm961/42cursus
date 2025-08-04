/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void error_exit(void)
{
    ft_putstr_fd("Error\n", 2);
    exit(1);
}

void print_stack(t_stack *stack, char name)
{
    ft_printf("Stack %c: ", name);
    while (stack)
    {
        ft_printf("%d ", stack->value);
        stack = stack->next;
    }
    ft_printf("\n");
}

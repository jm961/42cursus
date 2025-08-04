/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 03:48:43 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void push(t_stack **src, t_stack **dst)
{
    t_stack *tmp;

    if (!*src)
        return;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dst;
    *dst = tmp;
}

void pa(t_stack **stack_a, t_stack **stack_b, int i)
{
    push(stack_b, stack_a);
    if (i == 1)
        ft_printf("pa\n");
}

void pb(t_stack **stack_a, t_stack **stack_b, int i)
{
    push(stack_a, stack_b);
    if (i == 1)
        ft_printf("pb\n");
}

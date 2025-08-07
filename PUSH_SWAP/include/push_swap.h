/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 01:57:36 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 15:34:45 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include <limits.h>

typedef struct s_stack
{
    int value;
    int index;
    int position;
    int target_position;
    int cost_a;
    int cost_b;
    struct s_stack *next;
} t_stack;

// operations
void sa(t_stack **stack_a, int i);
void sb(t_stack **stack_b, int i);
void ss(t_stack **stack_a, t_stack **stack_b, int i);
void pa(t_stack **stack_a, t_stack **stack_b, int i);
void pb(t_stack **stack_a, t_stack **stack_b, int i);
void ra(t_stack **stack_a, int i);
void rb(t_stack **stack_b, int i);
void rr(t_stack **stack_a, t_stack **stack_b, int i);
void rra(t_stack **stack_a, int i);
void rrb(t_stack **stack_b, int i);
void rrr(t_stack **stack_a, t_stack **stack_b, int i);

// Stack utility functions
t_stack *stack_new(int value);
void stack_add_bottom(t_stack **stack, t_stack *new_node);
t_stack *stack_get_last(t_stack *stack);
int stack_size(t_stack *stack);
void stack_free(t_stack **stack);

// Input validation and parsing
int is_valid_number(char *str);
int is_valid_input(char **argv);
int is_valid_split_input(char **split_args);
int has_duplicates(t_stack *stack);
int is_sorted(t_stack *stack);
t_stack *parse_input(int argc, char **argv);
t_stack *parse_split_input(char **split_args);
void free_split(char **split);

// Algorithm functions
void assign_index(t_stack **stack);
void assign_position(t_stack **stack);
void assign_target_position(t_stack **stack_a, t_stack **stack_b);
void calculate_cost(t_stack **stack_a, t_stack **stack_b);
void execute_cheapest_move(t_stack **stack_a, t_stack **stack_b);

// Sorting algorithms
void sort_three(t_stack **stack);
void sort_small(t_stack **stack_a, t_stack **stack_b);
void sort_large(t_stack **stack_a, t_stack **stack_b);
void push_swap(t_stack **stack_a, t_stack **stack_b);

// Utility functions
void error_exit(void);
void print_stack(t_stack *stack, char name);

#endif
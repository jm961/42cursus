/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 05:44:50 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_puthex_recursive(unsigned long num, int uppercase)
{
    char *base_lower;
    char *base_upper;

    base_lower = "0123456789abcdef";
    base_upper = "0123456789ABCDEF";
    if (num >= 16)
        ft_puthex_recursive(num / 16, uppercase);
    if (uppercase)
        write(1, &base_upper[num % 16], 1);
    else
        write(1, &base_lower[num % 16], 1);
}

int ft_puthex_count(unsigned long num, int uppercase)
{
    int len;

    len = ft_numlen_base(num, 16);
    ft_puthex_recursive(num, uppercase);
    return (len);
}

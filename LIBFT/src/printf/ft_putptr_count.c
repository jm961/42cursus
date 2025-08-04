/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 05:44:50 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putptr_count(void *ptr)
{
    unsigned long addr;
    int len;

    if (!ptr)
    {
        write(1, "(nil)", 5);
        return (5);
    }
    addr = (unsigned long)ptr;
    len = 2; // for "0x"
    write(1, "0x", 2);
    len += ft_puthex_count(addr, 0);
    return (len);
}

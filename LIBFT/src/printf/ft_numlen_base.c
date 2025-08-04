/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 05:44:50 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_numlen_base(unsigned long num, int base)
{
    int len;

    if (num == 0)
        return (1);
    len = 0;
    while (num > 0)
    {
        num /= base;
        len++;
    }
    return (len);
}

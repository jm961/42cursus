/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:38:33 by jeid              #+#    #+#             */
/*   Updated: 2025/07/05 19:49:54 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_printptr(void *ptr)
{
	int output;
	uintptr_t addr;

	addr = (uintptr_t)ptr;
	output = 0;
	output += write(1, "0x", 2);
	if (addr == 0)
	{
		output += write(1, "0", 1);
	}
	else
	{
		ft_putptr(addr);
		output += ft_ptr_len(addr);
	}
	return (output);
}

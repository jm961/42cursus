/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:38:33 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 23:39:26 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_printptr(unsigned long long ptr)
{
	int output;

	output = 0;
	output += write(1, "0x", 2);
	if (ptr == 0)
	{
		output += write(1, "0", 1);
	}
	else
	{
		ft_putptr(ptr);
		output += ft_ptr_len(ptr);
	}
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:04:32 by jeid              #+#    #+#             */
/*   Updated: 2025/07/13 02:17:39 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_printf(const char *input, ...)
{
	int i;
	va_list args;
	int output;

	i = 0;
	va_start(args, input);
	output = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			output += formats(&args, input[i + 1]);
			i += 2;
		}
		else
		{
			output += ft_printchar(input[i]);
			i++;
		}
	}
	va_end(args);
	return (output);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:25:10 by jeid              #+#    #+#             */
/*   Updated: 2025/07/01 22:39:36 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int formats(va_list args, const char format)
{
	int output;

	output = 0;
	if (format == 'c')
		output += ft_printchar(va_arg(args, int));
	else if (format == 's')
		output += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		output += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd')
		output += ft_printnum(va_arg(args, int));
	else if (format == 'u')
		output += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		output += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		output += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'i')
		output += ft_printnum(va_arg(args, int));
	else if (format == '%')
		output += ft_printpercent();
	return (output);
}

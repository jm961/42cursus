/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:04:32 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_handle_format(va_list *args, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar_count(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_putstr_count(va_arg(*args, char *)));
	else if (specifier == 'p')
		return (ft_putptr_count(va_arg(*args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr_count(va_arg(*args, int)));
	else if (specifier == 'u')
		return (ft_putunbr_count(va_arg(*args, unsigned int)));
	else if (specifier == 'x')
		return (ft_puthex_count(va_arg(*args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_puthex_count(va_arg(*args, unsigned int), 1));
	else if (specifier == '%')
		return (ft_putchar_count('%'));
	else
		return (0);
}

int ft_printf(const char *format, ...)
{
	int i;
	va_list args;
	int output;

	if (!format)
		return (-1);
	i = 0;
	va_start(args, format);
	output = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			output += ft_handle_format(&args, format[i + 1]);
			i += 2;
		}
		else
		{
			output += ft_putchar_count(format[i]);
			i++;
		}
	}
	va_end(args);
	return (output);
}

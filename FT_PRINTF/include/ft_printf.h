/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:00:45 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 05:44:50 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

/* Main printf function */
int ft_printf(const char *format, ...);

/* Format handlers */
int ft_handle_format(va_list *args, char specifier);

/* Basic output functions */
int ft_putchar_count(char c);
int ft_putstr_count(char *str);

/* Number conversion and output */
int ft_putnbr_count(int n);
int ft_putunbr_count(unsigned int n);
int ft_puthex_count(unsigned long num, int uppercase);
int ft_putptr_count(void *ptr);

/* Utility functions */
int ft_numlen_base(unsigned long num, int base);
char *ft_uitoa_base(unsigned long num, char *base_chars);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:00:45 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 23:56:20 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

char *ft_uitoa(unsigned int n);
void ft_putptr(uintptr_t num);
void ft_puthex(unsigned int num, const char format);
int ft_ptr_len(uintptr_t num);
int ft_printunsigned(unsigned int n);
int ft_printstr(char *s);
int ft_printptr(unsigned long long ptr);
int ft_printpercent(void);
int ft_printnum(int n);
int ft_print_hex(unsigned int num, const char format);
int ft_printf(const char *input, ...);
int ft_printchar(int c);
int ft_numlen(unsigned int num);
int ft_hexlen(unsigned int num);
int formats(va_list args, const char format);

#endif
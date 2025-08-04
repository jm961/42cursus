/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:15:54 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 05:44:51 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}

int ft_putstr_count(char *str)
{
	int len;

	if (!str)
		str = "(null)";
	len = 0;
	while (str[len])
	{
		if (write(1, &str[len], 1) == -1)
			return (-1);
		len++;
	}
	return (len);
}

int ft_putnbr_count(int n)
{
	char buffer[12];
	int count;
	long num;
	int i;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += ft_putchar_count('-');
		num = -num;
	}
	if (num == 0)
		return (count + ft_putchar_count('0'));
	i = 0;
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (--i >= 0)
		count += ft_putchar_count(buffer[i]);
	return (count);
}

int ft_putunbr_count(unsigned int n)
{
	int count;

	count = 0;
	if (n >= 10)
		count += ft_putunbr_count(n / 10);
	count += ft_putchar_count((n % 10) + '0');
	return (count);
}

int ft_puthex_count(unsigned long num, int uppercase)
{
	int count;
	char *base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_puthex_count(num / 16, uppercase);
	count += ft_putchar_count(base[num % 16]);
	return (count);
}

int ft_putptr_count(void *ptr)
{
	int count;
	uintptr_t addr;

	if (!ptr)
		return (ft_putstr_count("0x0"));
	addr = (uintptr_t)ptr;
	count = ft_putstr_count("0x");
	count += ft_puthex_count(addr, 0);
	return (count);
}

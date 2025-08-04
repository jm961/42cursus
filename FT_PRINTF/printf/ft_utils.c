/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:33:17 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 04:26:04 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_numlen_base(unsigned long num, int base)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num > 0)
	{
		len++;
		num /= base;
	}
	return (len);
}

char	*ft_uitoa_base(unsigned long num, char *base_chars)
{
	char	*result;
	int		len;
	int		base;

	base = ft_strlen(base_chars);
	len = ft_numlen_base(num, base);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
	{
		result[0] = base_chars[0];
		return (result);
	}
	while (num > 0)
	{
		result[--len] = base_chars[num % base];
		num /= base;
	}
	return (result);
}

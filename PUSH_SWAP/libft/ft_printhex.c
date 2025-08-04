/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeid <jeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:37:07 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 21:39:15 by jeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
	{
		return (write(1, "0", 1));
	}
	else
	{
		ft_puthex(num, format);
	}
	return (ft_hexlen(num));
}

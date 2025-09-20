/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:25:08 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putunbr_count(unsigned int n)
{
	int printlen;
	char *num;

	printlen = 0;
	if (n == 0)
	{
		printlen += write(1, "0", 1);
	}
	else
	{
		num = ft_uitoa(n);
		printlen += ft_putstr_count(num);
		free(num);
	}
	return (printlen);
}

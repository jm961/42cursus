/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:16:34 by jeid              #+#    #+#             */
/*   Updated: 2025/08/04 06:09:11 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr_count(int n)
{
	int len;
	char *num;

	num = ft_itoa(n);
	len = ft_putstr_count(num);
	free(num);
	return (len);
}

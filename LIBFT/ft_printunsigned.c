/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeid <jeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:25:08 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 23:04:18 by jeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printunsigned(unsigned int n)
{
	int		printlen;
	char	*num;

	printlen = 0;
	if (n == 0)
	{
		printlen += write(1, "0", 1);
	}
	else
	{
		num = ft_uitoa(n);
		printlen += ft_printstr(num);
		free(num);
	}
	return (printlen);
}

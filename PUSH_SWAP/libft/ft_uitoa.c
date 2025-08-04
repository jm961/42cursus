/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeid <jeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:29:16 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 21:33:05 by jeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_numlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
	{
		return (0);
	}
	num[len] = '\0';
	while (n != 0)
	{
		num [len - 1] = n % 10 + 48;
		n = n / 10;
		len --;
	}
	return (num);
}

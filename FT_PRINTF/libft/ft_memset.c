/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeid <jeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:37:19 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 23:10:17 by jeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int		i;
	char				*p;

	p = s;
	i = 0;
	if (!s)
		return (0);
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

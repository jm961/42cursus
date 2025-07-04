/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeid <jeid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 03:47:26 by jeid              #+#    #+#             */
/*   Updated: 2025/06/30 23:08:09 by jeid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*f;

	if (n != 0 && s > SIZE_MAX / n)
		return (NULL);
	f = (void *)malloc(n * s);
	if (!f)
		return (NULL);
	ft_bzero (f, (n * s));
	return (f);
}

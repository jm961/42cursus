/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 06:18:30 by jm_eid            #+#    #+#             */
/*   Updated: 2025/09/18 20:23:49 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return;
	ft_putstr_fd((char *)s, fd);
	write(fd, "\n", 1);
}

// int main(void)
// {
//     char str[] = "Hello, World!";
//     int fd = 1; // Standard output

//     ft_putendl_fd(str, fd);

//     return 0;
// }
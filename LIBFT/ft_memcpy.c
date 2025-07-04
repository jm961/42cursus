/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:27:03 by jeid              #+#    #+#             */
/*   Updated: 2025/05/23 20:55:36 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    if (dst == src || n == 0)
        return (dst);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dst[20];

//     ft_memcpy(dst, src, 13);
//     printf("Destination: %s\n", dst);

//     return 0;
// }
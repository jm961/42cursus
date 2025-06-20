/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 01:28:26 by jm_eid            #+#    #+#             */
/*   Updated: 2025/06/20 01:28:50 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

// int main(void)
// {
//     const char *test1 = "   -42";
//     const char *test2 = "42";
//     const char *test3 = "   +123abc";
//     const char *test4 = "  \t\n\v\f\r  -2147483648";

//     printf("Test 1: %d\n", atoi(test1)); 
//     printf("Test 2: %d\n", atoi(test2)); 
//     printf("Test 3: %d\n", atoi(test3)); 
//     printf("Test 4: %d\n", atoi(test4));

//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:51:22 by jm_eid            #+#    #+#             */
/*   Updated: 2025/07/05 19:31:00 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *s)
{
    size_t len;

    len = 0;
    if (!s)
        return (0);
    while (*s)
    {
        len++;
        s++;
    }
    return (len);
}

char *ft_strchr(char *s, int c)
{
    if (!s)
        return (NULL);
    if (c == '\0')
        return ((char *)&s[ft_strlen(s)]);
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (NULL);
}

char *ft_strjoin(char *left_str, char *buff)
{
    size_t i;
    size_t j;
    char *str;

    if (!left_str)
    {
        left_str = (char *)malloc(1 * sizeof(char));
        left_str[0] = '\0';
    }
    if (!left_str || !buff)
        return (NULL);
    str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
    if (str == NULL)
        return (NULL);
    i = -1;
    j = 0;
    if (left_str)
        while (left_str[++i] != '\0')
            str[i] = left_str[i];
    while (buff[j] != '\0')
        str[i++] = buff[j++];
    str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
    free(left_str);
    return (str);
}

char *ft_get_line(char *left_str)
{
    int i;
    char *str;

    i = 0;
    if (!left_str[i])
        return (NULL);
    while (left_str[i] && left_str[i] != '\n')
        i++;
    str = (char *)malloc(sizeof(char) * (i + 2));
    if (!str)
        return (NULL);
    i = 0;
    while (left_str[i] && left_str[i] != '\n')
    {
        str[i] = left_str[i];
        i++;
    }
    if (left_str[i] == '\n')
    {
        str[i] = left_str[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_new_left_string(char *left_str)
{
    int i;
    int j;
    char *str;

    i = 0;
    while (left_str[i] && left_str[i] != '\n')
        i++;
    if (!left_str[i])
    {
        free(left_str);
        return (NULL);
    }
    str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
    if (!str)
        return (NULL);
    i++;
    j = 0;
    while (left_str[i])
        str[j++] = left_str[i++];
    str[j] = '\0';
    free(left_str);
    return (str);
}

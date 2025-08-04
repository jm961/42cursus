/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:49:35 by jm_eid            #+#    #+#             */
/*   Updated: 2025/08/04 05:55:40 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read_to_left_str(int fd, char *left_str)
{
    char *buffer;
    int rd_bytes;

    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    rd_bytes = 1;
    while (!ft_strchr(left_str, '\n') && rd_bytes != 0)
    {
        rd_bytes = read(fd, buffer, BUFFER_SIZE);
        if (rd_bytes == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[rd_bytes] = '\0';
        left_str = ft_strjoin(left_str, buffer);
    }
    free(buffer);
    return (left_str);
}

char *get_next_line(int fd)
{
    char *line;
    static char *left_str;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    left_str = ft_read_to_left_str(fd, left_str);
    if (!left_str)
        return (NULL);
    line = ft_get_line(left_str);
    left_str = ft_new_left_str(left_str);
    return (line);
}
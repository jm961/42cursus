/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:49:35 by jm_eid            #+#    #+#             */
/*   Updated: 2025/07/05 19:11:53 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read_to_left_string(int fd, char *left_string)
{
    char *buffer;
    int rd_bytes;

    buffer = malloc((BUFFER_SIZE + 1) * sizeof (char));
    if (!buffer)
        return (NULL);
    rd_bytes = 1;
    while (!ft_strchr(left_string, '\n') && rd_bytes != 0)
    {
        rd_bytes = read(fd, buffer, BUFFER_SIZE);
        if (rd_bytes == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[rd_bytes] = '\0';
        left_string = ft_strjoin(left_string, buffer);
    }
    free(buffer);
    return (left_string);
}

char *get_next_line(int fd)
{
    char *line;
    static char *left_string;

    if (fd < 0 || BUFFER_SIZE == 0)
        return (NULL);
    left_string = ft_read_to_left_string(fd, left_string);
    if (!left_string)
        return (NULL);
    line = ft_get_line(left_string);
    left_string = ft_new_left_string(left_string);
    return (line);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:34:22 by jm_eid            #+#    #+#             */
/*   Updated: 2025/07/05 19:41:02 by jm_eid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char *ft_read_to_left_string(int fd, char *left_str)
{
    char *buff;
    int rd_bytes;

    buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    rd_bytes = 1;
    while (!ft_strchr(left_str, '\n') && rd_bytes != 0)
    {
        rd_bytes = read(fd, buff, BUFFER_SIZE);
        if (rd_bytes == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[rd_bytes] = '\0';
        left_str = ft_strjoin(left_str, buff);
    }
    free(buff);
    return (left_str);
}

char *get_next_line(int fd)
{
    char *line;
    static char *left_str[4096];

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    left_str[fd] = ft_read_to_left_string(fd, left_str[fd]);
    if (!left_str[fd])
        return (NULL);
    line = ft_get_line(left_str[fd]);
    left_str[fd] = ft_new_left_str(left_str[fd]);
    return (line);
}
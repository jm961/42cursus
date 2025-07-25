#ifndef    GET_NEXT_LINE_H
#define     GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1000
#endif

char *get_next_line(int fd);
char *ft_read_to_left_string(int fd, char *left_str);
char *ft_strchr(char *s, int c);
char *ft_strjoin(char *left_str, char *buff);
size_t ft_strlen(char *s);
char *ft_get_line(char *left_str);
char *ft_new_left_string(char *left_str);

#endif

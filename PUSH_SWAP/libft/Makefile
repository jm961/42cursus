# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 21:05:00 by jm_eid            #+#    #+#              #
#    Updated: 2025/09/18 20:47:27 by jm_eid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
AR			= ar rcs
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

INCDIR		= ./includes
SRCDIR		= src

SRC			= \
	$(SRCDIR)/character/ft_isalnum.c \
	$(SRCDIR)/character/ft_isalpha.c \
	$(SRCDIR)/character/ft_isascii.c \
	$(SRCDIR)/character/ft_isdigit.c \
	$(SRCDIR)/character/ft_isprint.c \
	$(SRCDIR)/character/ft_tolower.c \
	$(SRCDIR)/character/ft_toupper.c \
	$(SRCDIR)/conversion/ft_atoi.c \
	$(SRCDIR)/conversion/ft_itoa.c \
	$(SRCDIR)/conversion/ft_uitoa.c \
	$(SRCDIR)/get_next_line/get_next_line.c \
	$(SRCDIR)/get_next_line/get_next_line_utils.c \
	$(SRCDIR)/list/ft_lstadd_back.c \
	$(SRCDIR)/list/ft_lstadd_front.c \
	$(SRCDIR)/list/ft_lstclear.c \
	$(SRCDIR)/list/ft_lstdelone.c \
	$(SRCDIR)/list/ft_lstiter.c \
	$(SRCDIR)/list/ft_lstlast.c \
	$(SRCDIR)/list/ft_lstmap.c \
	$(SRCDIR)/list/ft_lstnew.c \
	$(SRCDIR)/list/ft_lstsize.c \
	$(SRCDIR)/memory/ft_bzero.c \
	$(SRCDIR)/memory/ft_calloc.c \
	$(SRCDIR)/memory/ft_memchr.c \
	$(SRCDIR)/memory/ft_memcmp.c \
	$(SRCDIR)/memory/ft_memcpy.c \
	$(SRCDIR)/memory/ft_memmove.c \
	$(SRCDIR)/memory/ft_memset.c \
	$(SRCDIR)/output/ft_putchar_fd.c \
	$(SRCDIR)/output/ft_putendl_fd.c \
	$(SRCDIR)/output/ft_putnbr_fd.c \
	$(SRCDIR)/output/ft_putstr_fd.c \
	$(SRCDIR)/ft_printf/ft_numlen_base.c \
	$(SRCDIR)/ft_printf/ft_numlen.c \
	$(SRCDIR)/ft_printf/ft_printchar.c \
	$(SRCDIR)/ft_printf/ft_printf.c \
	$(SRCDIR)/ft_printf/ft_printnum.c \
	$(SRCDIR)/ft_printf/ft_printstr.c \
	$(SRCDIR)/ft_printf/ft_printunsigned.c \
	$(SRCDIR)/ft_printf/ft_puthex_count.c \
	$(SRCDIR)/ft_printf/ft_putptr_count.c \
	$(SRCDIR)/string/ft_split.c \
	$(SRCDIR)/string/ft_strchr.c \
	$(SRCDIR)/string/ft_strdup.c \
	$(SRCDIR)/string/ft_striteri.c \
	$(SRCDIR)/string/ft_strjoin.c \
	$(SRCDIR)/string/ft_strlcat.c \
	$(SRCDIR)/string/ft_strlcpy.c \
	$(SRCDIR)/string/ft_strlen.c \
	$(SRCDIR)/string/ft_strmapi.c \
	$(SRCDIR)/string/ft_strncmp.c \
	$(SRCDIR)/string/ft_strnstr.c \
	$(SRCDIR)/string/ft_strrchr.c \
	$(SRCDIR)/string/ft_strtrim.c \
	$(SRCDIR)/string/ft_substr.c

OBJ			= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c includes/libft.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re



# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 05:44:50 by jm_eid            #+#    #+#              #
#    Updated: 2025/08/04 06:38:16 by jm_eid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I.
AR			= ar rc
RM			= rm -f

# Source directories
SRCDIR		= src
CHARDIR		= $(SRCDIR)/character
MEMDIR		= $(SRCDIR)/memory
STRDIR		= $(SRCDIR)/string
CONVDIR		= $(SRCDIR)/conversion
OUTDIR		= $(SRCDIR)/output
PRINTFDIR	= $(SRCDIR)/printf
GNLDIR		= $(SRCDIR)/get_next_line
LISTDIR		= $(SRCDIR)/list

# Character functions
CHAR_SRCS	= $(CHARDIR)/ft_isalpha.c $(CHARDIR)/ft_isdigit.c $(CHARDIR)/ft_isalnum.c \
			  $(CHARDIR)/ft_isascii.c $(CHARDIR)/ft_isprint.c $(CHARDIR)/ft_toupper.c \
			  $(CHARDIR)/ft_tolower.c

# Memory functions
MEM_SRCS	= $(MEMDIR)/ft_bzero.c $(MEMDIR)/ft_calloc.c $(MEMDIR)/ft_memchr.c \
			  $(MEMDIR)/ft_memcmp.c $(MEMDIR)/ft_memcpy.c $(MEMDIR)/ft_memmove.c \
			  $(MEMDIR)/ft_memset.c

# String functions
STR_SRCS	= $(STRDIR)/ft_split.c $(STRDIR)/ft_strchr.c $(STRDIR)/ft_strdup.c \
			  $(STRDIR)/ft_striteri.c $(STRDIR)/ft_strjoin.c $(STRDIR)/ft_strlcat.c \
			  $(STRDIR)/ft_strlcpy.c $(STRDIR)/ft_strlen.c $(STRDIR)/ft_strmapi.c \
			  $(STRDIR)/ft_strncmp.c $(STRDIR)/ft_strnstr.c $(STRDIR)/ft_strrchr.c \
			  $(STRDIR)/ft_strtrim.c $(STRDIR)/ft_substr.c

# Conversion functions
CONV_SRCS	= $(CONVDIR)/ft_atoi.c $(CONVDIR)/ft_itoa.c $(CONVDIR)/ft_uitoa.c

# Output functions
OUT_SRCS	= $(OUTDIR)/ft_putchar_fd.c $(OUTDIR)/ft_putendl_fd.c \
			  $(OUTDIR)/ft_putnbr_fd.c $(OUTDIR)/ft_putstr_fd.c

# Linked list functions
LST_SRCS	= $(LISTDIR)/ft_lstadd_back.c $(LISTDIR)/ft_lstadd_front.c \
			  $(LISTDIR)/ft_lstclear.c $(LISTDIR)/ft_lstdelone.c \
			  $(LISTDIR)/ft_lstiter.c $(LISTDIR)/ft_lstlast.c \
			  $(LISTDIR)/ft_lstmap.c $(LISTDIR)/ft_lstnew.c $(LISTDIR)/ft_lstsize.c

# Printf functions
PRINTF_SRCS	= $(PRINTFDIR)/ft_printf.c $(PRINTFDIR)/ft_printchar.c \
			  $(PRINTFDIR)/ft_printstr.c $(PRINTFDIR)/ft_printnum.c \
			  $(PRINTFDIR)/ft_printunsigned.c $(PRINTFDIR)/ft_puthex_count.c \
			  $(PRINTFDIR)/ft_putptr_count.c $(PRINTFDIR)/ft_numlen_base.c \
			  $(PRINTFDIR)/ft_numlen.c

# Get next line functions
GNL_SRCS	= $(GNLDIR)/get_next_line.c $(GNLDIR)/get_next_line_utils.c

SRCS		= $(CHAR_SRCS) $(MEM_SRCS) $(STR_SRCS) $(CONV_SRCS) $(OUT_SRCS) \
			  $(LST_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 03:34:05 by jm_eid            #+#    #+#              #
#    Updated: 2025/08/04 03:52:35 by jm_eid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCDIR = src
INCDIR = include
LIBFTDIR = libft
OBJDIR = obj

INCLUDES = -I$(INCDIR) -I$(LIBFTDIR)

SRCFILES = main.c \
		   operations/swap.c \
		   operations/push.c \
		   operations/rotate.c \
		   operations/reverse_rotate.c \
		   utils/stack_utils.c \
		   utils/input_validation.c \
		   utils/parse_input.c \
		   utils/error_utils.c \
		   algorithms/push_swap.c \
		   algorithms/sort_small.c \
		   algorithms/sort_large.c

OBJFILES = $(SRCFILES:%.c=$(OBJDIR)/%.o)

SOURCES = $(addprefix $(SRCDIR)/, $(SRCFILES))

LIBFT = $(LIBFTDIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) $(LIBFT) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	make -C $(LIBFTDIR)

clean:
	rm -rf $(OBJDIR)
	make clean -C $(LIBFTDIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re

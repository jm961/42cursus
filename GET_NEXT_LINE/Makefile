# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jm_eid <jm_eid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 20:00:00 by jm_eid            #+#    #+#              #
#    Updated: 2025/08/04 05:57:30 by jm_eid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
BONUS_NAME = get_next_line_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42

# Source files
SRCS = get_next_line.c get_next_line_utils.c
BONUS_SRCS = get_next_line_bonus.c get_next_line_utils_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Default rule
all: $(NAME)

# Create library
$(NAME): $(OBJS)
	ar rcs lib$(NAME).a $(OBJS)

# Bonus rule
bonus: $(BONUS_OBJS)
	ar rcs lib$(BONUS_NAME).a $(BONUS_OBJS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Clean everything
fclean: clean
	rm -f lib$(NAME).a lib$(BONUS_NAME).a test_gnl $(TEST_FILE)

# Rebuild
re: fclean all

# Phony targets
.PHONY: all bonus clean fclean re test
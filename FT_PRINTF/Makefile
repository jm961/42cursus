NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft
AR = ar rc
RM = rm -f

LIBFT_SRCS = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c \
			libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
			libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c \
			libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
			libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c \
			libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c \
			libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c \
			libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c \
			libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c \
			libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c \
			libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c \
			libft/ft_toupper.c

PRINTF_SRCS = printf/ft_printf.c printf/ft_output.c printf/ft_utils.c

SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS)

BONUS = libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstclear.c \
		libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstlast.c \
		libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_lstsize.c

OBJS = $(SRCS:.c=.o)
OBJBNS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(OBJBNS)
	$(AR) $(NAME) $(OBJS) $(OBJBNS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJBNS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) test_formats.c -L. -lftprintf -o test_formats
	./test_formats

.PHONY: all bonus clean fclean re test

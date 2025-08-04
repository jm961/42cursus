NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRCS =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	    ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	    ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	    ft_memmove.c ft_memset.c ft_putendl_fd.c ft_putchar_fd.c \
	    ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	    ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	    ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	    ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	    ft_tolower.c ft_toupper.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c \
		ft_formats.c ft_hexlen.c ft_numlen.c ft_printchar.c \
		ft_printf.c ft_printhex.c ft_printnum.c ft_printpercent.c \
		ft_printptr.c ft_printstr.c ft_printunsigned.c ft_ptrlen.c \
		ft_puthex.c ft_putptr.c ft_uitoa.c \
		get_next_line.c get_next_line_utils.c


OBJS = $(SRCS:.c=.o)

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

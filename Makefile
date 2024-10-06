SRCS = \
ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_memchr.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
ft_isalpha.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memcmp.c ft_toupper.c ft_tolower.c ft_strncmp.c \
ft_strrchr.c ft_strnstr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_substr.c ft_strtrim.c \
ft_strmapi.c ft_striteri.c ft_itoa.c

NAME = libft.a
OBJS = $(SRCS:.c=.o)

LIBC = ar rcs
FLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME)	: $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all:	$(NAME)

clean:  
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

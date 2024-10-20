CC = gcc

HEADER = ./

SRCS = ft_atoi.c	ft_toupper.c	ft_tolower.c	ft_isascii.c	ft_isdigit.c	ft_strncmp.c	ft_isalpha.c	ft_isalnum.c	ft_isprint.c\
	ft_strlcpy.c	ft_strrchr.c	ft_strchr.c		ft_strnstr.c	ft_memchr.c		ft_memcmp.c		ft_memmove.c	ft_memset.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wall -Wextra -I $(HEADER)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
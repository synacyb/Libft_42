CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DELETE = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELETE) $(OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

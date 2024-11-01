CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DELETE = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(DELETE) $(OBJS)
	@echo "Object files deleted."

fclean: clean
	@$(DELETE) $(NAME)
	@echo "Library $(NAME) deleted."

rebuild: fclean all

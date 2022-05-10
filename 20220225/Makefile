NAME = test.out
CC = gcc
CFLAGS = -Wall -Werror -Wextra -o
SRC = a.c b.c main.c
OBJS = $(SRC: .c=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -fr $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all

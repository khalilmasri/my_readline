OBJ = main.o        	\
	  my_readline.o

CFLAGS += -Wall -Wextra -Werror

HEADER = include/my_readline.h

NAME = my_readline

CC = gcc

RM = rm

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

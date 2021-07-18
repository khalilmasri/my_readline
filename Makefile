OBJ = obj/my_readline.o 	\
	  obj/main.o        	\
	  obj/str_handling.o

CFLAGS += -Wall -Wextra -Werror

HEADER = include/my_readline.h

NAME = my_readline

CC = gcc

RM = rm

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

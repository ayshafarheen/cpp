NAME = phonebook

MY_SOURCES = PhoneBook.cpp

MY_OBJS = $(MY_SOURCES:.cpp=.o)

CFLAGS =  -Wall -g -fsanitize=address -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(MY_OBJS)
	$(CC) $(CFLAGS) $(MY_SOURCES) -o $(NAME)

clean:
	rm -f $(MY_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
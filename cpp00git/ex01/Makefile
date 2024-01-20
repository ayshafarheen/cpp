# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:16:37 by afarheen          #+#    #+#              #
#    Updated: 2023/09/26 11:29:51 by afarheen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

MY_SOURCES = Contact.cpp PhoneBook.cpp

MY_OBJS = $(MY_SOURCES:.cpp=.o)

CFLAGS =  -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(MY_OBJS)
	$(CC) $(CFLAGS) $(MY_SOURCES) -o $(NAME)

clean:
	rm -f $(MY_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
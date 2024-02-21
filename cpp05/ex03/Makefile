# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 09:18:53 by afarheen          #+#    #+#              #
#    Updated: 2024/02/21 19:40:38 by fathmanazme      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

MY_SOURCES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp
# RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

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

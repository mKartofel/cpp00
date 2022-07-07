# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 08:38:45 by vfiszbin          #+#    #+#              #
#    Updated: 2022/07/07 16:30:38 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp\
		utils.cpp\

OBJS = ${SRCS:.cpp=.o}

INCLUDES =	PhoneBook.hpp\
			Contact.hpp\
			utils.hpp\

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

.cpp.o: ${INCLUDES}
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
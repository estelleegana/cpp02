#nom du programme
NAME = ex02

#compilateur
CC = c++

#flag(s)
FLAGS = -Wall -Wextra -Werror -std=c++98

#autres raccourcis
RM = rm -rf

#fichier(s) source(s)
SRCS = Fixed.cpp \
	main.cpp \

#creation de fichier(s) objet(s) a partir de fichier(s) source(s)
OBJS = $(SRCS:.cpp=.o)

#compiler le prgrm
$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

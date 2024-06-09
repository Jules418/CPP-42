
NAME	=	Animals

SRCS	=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp

DIR_BUILD	=	.build/
OBJS		=	$(patsubst %.cpp, $(DIR_BUILD)%.o, $(SRCS))

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g3
CC			=	c++
RM			=	rm -rf

HEADER		=	Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

DIR_INCLUDES	= .

INCLUDES	=\
		$(addprefix -I , $(DIR_INCS))

LIBS		=

DEPENDECIES	=

all:
	$(MAKE) $(NAME)

$(NAME):	$(OBJS) $(DEPENDECIES) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean:
	$(RM) $(DIR_BUILD)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

$(DIR_BUILD)%.o : $(SRC_PATH)%.cpp
			@mkdir -p $(shell dirname $@)
			$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

.PHONY: all clean fclean re

NAME	=	fixed_point_decimal

SRCS	=	main.cpp \
				Fixed.cpp

DIR_BUILD	=	.build/
OBJS		=	$(patsubst %.cpp, $(DIR_BUILD)%.o, $(SRCS))

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g3
CC			=	c++
RM			=	rm -rf


DIR_INCLUDES	= .

INCLUDES	=\
		$(addprefix -I , $(DIR_INCS))

LIBS		=

DEPENDECIES	=

all:
	$(MAKE) $(NAME)

$(NAME):	$(OBJS) $(DEPENDECIES)
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
NAME = sed

SRC_FILES = main.cpp Sed.cpp
OBJ = $(SRC_FILES:.cpp=.o)

CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CPP) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

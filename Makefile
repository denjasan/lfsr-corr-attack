CC 			= clang++
NAME 		= lsfr_corr_attack
SRC 		= \
		src/lib.cpp \
    	src/gen.cpp \
    	src/par.cpp \
		src/seq.cpp \
		src/main.cpp
HEADERS		= \
		include/lib.hpp
INCLUDE_DIR	= ./include
OBJ 		= $(SRC:.cpp=.o)
INCFLAGS 	= -I$(INCLUDE_DIR)
FLAGS 		= -c -Wall -Wextra -Werror -std=c++17

all: $(SRC) $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(INCFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.cpp.o:
	$(CC) $(INCFLAGS) $(FLAGS) $< -o $@
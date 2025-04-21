CXX = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
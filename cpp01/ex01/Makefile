CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = zombieHorde

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean%   
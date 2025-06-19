CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = iter

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
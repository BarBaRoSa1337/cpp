<<<<<<< HEAD
NAME = iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
=======
CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = iter

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
>>>>>>> 1a5507ec1065ad9c905097cad70141ecd2d697a7

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
<<<<<<< HEAD
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
=======
	rm -f $(OBJ) $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean%   
>>>>>>> 1a5507ec1065ad9c905097cad70141ecd2d697a7

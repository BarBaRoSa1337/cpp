CXX = c++

SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = a.out

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean : 
	-rm -f $(OBJS)

fclean : clean
	-rm -f $(NAME)

re : fclean	all
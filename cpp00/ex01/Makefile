CXX = c++
CXXFLAGS = -std=c++98
SRC = contact.cpp main.cpp Phone_book.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = contact_book

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = contact.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = contact_book

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
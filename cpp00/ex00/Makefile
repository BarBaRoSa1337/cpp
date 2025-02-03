# Variables
CXX = g++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = megaphone

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
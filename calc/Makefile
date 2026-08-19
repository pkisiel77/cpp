CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20

TARGET = calc
SOURCES = main.cpp calc.cpp history.cpp input.cpp operations.cpp cli.cpp

all:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: all
	./$(TARGET) $(ARGS)

clean:
	rm -f $(TARGET)



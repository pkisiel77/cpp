CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = calc
SOURCES = main.cpp calc.cpp

all:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)



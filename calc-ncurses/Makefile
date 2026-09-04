CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20
LDFLAGS = -lncurses

TARGET = calc-ncurses
SOURCES = main.cpp ui.cpp calculator.cpp app_state.cpp history.cpp

all:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET) $(LDFLAGS)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

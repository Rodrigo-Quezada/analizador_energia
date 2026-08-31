CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
TARGET = analizador
OBJS = main.o analizador.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cpp analizador.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

analizador.o: analizador.cpp analizador.hpp
	$(CXX) $(CXXFLAGS) -c analizador.cpp

clean:
	rm -f $(TARGET) $(OBJS)

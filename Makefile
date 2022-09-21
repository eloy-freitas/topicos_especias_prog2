TARGET=main.o
CXX=g++
OBJS=main.cpp
DIR=inputs

main: $(OBJS)
	$(CXX) -std=c++17 -o $(TARGET) -Wall $(OBJS)
exec: 
	./$(TARGET) < $(DIR)/$(INPUT)

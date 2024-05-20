CXX = g++
CXXFLAGS = -Wall -std=c++17 -g
INC_DIR = -I./include
LIBS = 
SRC_DIR = ./src
TARGET = main

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=%.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INC_DIR) -o $@ $^ $(LIBS)

%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INC_DIR) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(TARGET) *.o

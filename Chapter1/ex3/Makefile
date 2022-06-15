TARGET_EXEC = main

CXXFLAGS = -Wall -g
CXX = g++
INCLUDE =
LIBS = -lm

SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build

SRC_NAMES = main.cpp

SRCS = $(SRC_NAMES:%=$(SRC_DIR)/%)
OBJS = $(SRC_NAMES:%.cpp=$(OBJ_DIR)/%.o)

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	mkdir -p $(dir $@)
	$(CXX) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(INCLUDE) $(CXXFLAGS) -c $< -o $@

.PHONY: clean run

run: $(BUILD_DIR)/$(TARGET_EXEC)
	@$<

clean:
	rm -rf $(BUILD_DIR) $(OBJ_DIR)

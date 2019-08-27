BASE_DIR := ../..
SRC_DIR	:= $(BASE_DIR)/src
OBJ_DIR := $(BASE_DIR)/Temp/obj
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
INC_DIR := $(BASE_DIR)/Headers/
OUTPUT_DIR := $(BASE_DIR)/Bin
TARGET := program.exe

$(OUTPUT_DIR)/$(TARGET): $(OBJ_FILES)
	g++ -o $@ $^ -I$(INC_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ -c -o $@ $<

clean:
	@echo cleaning....
	rm -f $(OBJ_DIR)/*
	rm -f $(OUTPUT_DIR)/$(TARGET)
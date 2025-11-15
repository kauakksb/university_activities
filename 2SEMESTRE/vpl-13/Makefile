# Compilador
CC = g++

# Flags
CFLAGS = -std=c++11 -Wall

# Nome 
TARGET = vpl_execution

# Pastas
BUILD_DIR = ./obj
SRC_DIR = ./src
INCLUDE_DIR = ./include

# Compilação target
$(TARGET): $(BUILD_DIR)/Banco.o $(BUILD_DIR)/ContaBancaria.o $(BUILD_DIR)/main.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/*.o -o $(TARGET)

# Compilação src
$(BUILD_DIR)/main.o: 
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/Banco.o: $(INCLUDE_DIR)/Banco.hpp 
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/Banco.cpp -o $(BUILD_DIR)/Banco.o

$(BUILD_DIR)/ContaBancaria.o: $(INCLUDE_DIR)/ContaBancaria.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/ContaBancaria.cpp -o $(BUILD_DIR)/ContaBancaria.o

clean:
	rm -f $(BUILD_DIR)/*
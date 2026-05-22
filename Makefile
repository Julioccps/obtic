.PHONY : all clean

SRC_DIR := src
BUILD_DIR := build

CC := clang
SRCS := $(wildcard $(SRC_DIR)/*.c)
TARGETS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%, $(SRCS))

all : $(TARGETS)

$(BUILD_DIR)/% : $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) -o $@ $^

$(BUILD_DIR) :
	mkdir -p $@

clean : $(BUILD_DIR)
	rm -rf $<

.PHONY : all clean

SRC_DIR := src
BUILD_DIR := build

CC := clang
TRIES := ifnfvanf wustdlib trac pwshbast
TARGETS :=

all :

include $(patsubst %, $(SRC_DIR)/%/Makefile.defs, $(TRIES))

all : $(TARGETS)

$(BUILD_DIR) :
	mkdir -p $@

clean : $(BUILD_DIR) # On purpose
	rm -rf $<

CC = gcc
CCPP = g++
CPPFLAGS =	-std=c++11
CPPLINK = -lstdc++
INC_DIR = include

C_FILES := $(wildcard src/*/*.cpp)
OBJ_FILES := $(patsubst src/%,lib/%,$(C_FILES:.cpp=.o))
LD_FLAGS :=
CC_FLAGS := -c -Wall -I$(INC_DIR)

all: bin/Wind

bin/Wind: $(OBJ_FILES) ; $(CCPP) $(LD_FLAGS) -o $@ $^ | mkdir -p bin

lib/%.o: src/%.c
	    mkdir -p $(dir $@)
	    $(CCPP) $(CC_FLAGS) -c -o $@ $<

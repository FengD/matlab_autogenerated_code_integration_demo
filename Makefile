INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
LIB_DIR = lib

DIRS = $(shell find $(SRC_DIR) -maxdepth 4 -type d)

SRC = $(foreach dir, $(DIRS), $(wildcard $(dir)/*.cpp))
OBJ = ${patsubst %.cpp, $(OBJ_DIR)/%.o, ${SRC}}

TARGET = main
BIN_TARGET = ${BIN_DIR}/${TARGET}

CXX ?= g++
CXXFLAGS = -pipe -g -Wall -I${INCLUDE_DIR} -I${INCLUDE_DIR}/simulink_include -c -O3 -mavx -mfma
STD14 = -std=c++14
LIB = -lpthread -lm -lrt

${BIN_TARGET}: ${OBJ}
	${CXX} ${OBJ} libs/libSimulinkSDK.a -o  $@ ${STD14} ${LIB}

${OBJ_DIR}/%.o:	%.cpp
	${CXX} ${CXXFLAGS} $< -o  $@ ${STD14} ${LIB}

clean:
	find ${OBJ_DIR} -name *.o -exec rm -rf {} \;

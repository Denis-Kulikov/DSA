cmake_minimum_required(VERSION 2.8)

project(dsa C CXX)

set(BIN ../bin)
set(SRC ../src)

set(MAIN_DIR ${SRC}/main)
set(STACK ${SRC}/stack)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN})

include_directories(${STACK})

add_library(l_stack STATIC ${STACK}/stack.c ${STACK}/stack.h)

add_executable(dsa ${MAIN_DIR}/main.c)

target_link_libraries(dsa l_stack)

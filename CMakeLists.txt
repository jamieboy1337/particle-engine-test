cmake_minimum_required(VERSION 3.0.0)
project(particle-engine-test VERSION 0.1.0)

include(CTest)
enable_testing()

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${SMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(particle-engine-test main.cpp)

find_package(glfw3 CONFIG REQUIRED)
find_package(glad REQUIRED)

target_link_libraries(particle-engine-test glfw glad::glad)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

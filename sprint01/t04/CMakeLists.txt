cmake_minimum_required(VERSION 3.10)

project(stdAlgoV1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC Algo1)

target_include_directories(${PROJECT_NAME} PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/src"
                          )

cmake_minimum_required(VERSION 3.18.1)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17)

project(bind)

add_subdirectory(app)

file(GLOB CPPS "app/src/*.cpp" "app/main.cpp")

add_subdirectory(utils)

target_link_libraries(algorithmUtils utils)

add_executable(${PROJECT_NAME} ${CPPS})

target_include_directories(${PROJECT_NAME} PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/app"
                          "${PROJECT_SOURCE_DIR}/app/src"
                          "${PROJECT_SOURCE_DIR}/utils"
                          )

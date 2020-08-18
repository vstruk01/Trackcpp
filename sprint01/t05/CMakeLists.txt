set(GCC_COVERAGE_COMPILE_FLAGS "-std=c++17")

add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})
project(stdAlgoV2)

include_directories(src/)

file(GLOB CPPS "src/*.cpp" "main.cpp")

add_executable(${PROJECT_NAME} ${CPPS})
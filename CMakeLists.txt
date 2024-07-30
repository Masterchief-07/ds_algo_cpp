CMAKE_MINIMUM_REQUIRED(VERSION 3.30)

project(dsalgo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/include/)

target_compile_options(${PROJECT_NAME} INTERFACE 
        -Wall 
        -Wextra 
        -pedantic 
        -g
)

enable_testing()

add_subdirectory(tests)

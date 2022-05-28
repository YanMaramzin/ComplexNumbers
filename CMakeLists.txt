cmake_minimum_required(VERSION 3.5)

project(ComplexNumbers LANGUAGES CXX)

if(UNITTEST)
        add_subdirectory(googletests/)
endif()

add_subdirectory(TestTask/libs/Complex)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(ComplexNumbers main.cpp)

target_link_libraries(${PROJECT_NAME} Complex)

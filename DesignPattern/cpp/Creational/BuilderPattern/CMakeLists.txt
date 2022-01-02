cmake_minimum_required(VERSION 3.2)

# Set the project name
project (builder-pattern)

file(GLOB BULDER_PATTERN PersonBulder/*.cpp)

# Add an executable
add_executable(${PROJECT_NAME} main.cpp
                               ${BULDER_PATTERN})

                               
cmake_minimum_required(VERSION 3.2)

# Set the project name
project (prototype-pattern)

find_package(Boost QUIET REQUIRED)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Boost Not found")
endif()
include_directories(${BOOST_INCLUDE_DIRS})

# Add an executable
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})

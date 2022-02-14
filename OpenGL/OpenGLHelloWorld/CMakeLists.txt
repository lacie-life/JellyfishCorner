cmake_minimum_required(VERSION 3.12)

project(OpenGLHelloWorld)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

message(${CMAKE_SOURCE_DIR})
add_library(GLAD ${CMAKE_SOURCE_DIR}/glad/src/glad.c)
target_include_directories(GLAD PUBLIC ${CMAKE_SOURCE_DIR}/glad/include/)

add_executable(helloworld helloworld.cpp)
target_link_libraries(helloworld OpenGL::GL GLUT::GLUT)

add_executable(test-1 test-1.cpp glad.c)
target_link_libraries(test-1 OpenGL::GL GLUT::GLUT GLAD ldl)

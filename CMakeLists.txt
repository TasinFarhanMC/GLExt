cmake_minimum_required(VERSION 3.11)
project(GLEXT C)

# Make Cmake Use New OpenGL
cmake_policy(SET CMP0072 NEW)
find_package(OpenGL REQUIRED)

add_library(glext STATIC ${CMAKE_CURRENT_SOURCE_DIR}/include/glext/gl.h
                         ${CMAKE_CURRENT_SOURCE_DIR}/src/gl.c)
target_include_directories(glext PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(glext PUBLIC OpenGL::GL)

add_library(glext_headers INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}/include/glext/gl.h)
target_include_directories(glext_headers
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

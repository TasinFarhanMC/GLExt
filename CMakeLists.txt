cmake_minimum_required(VERSION 3.11)
project(GLEXT C)

add_library(GLExt STATIC ${CMAKE_CURRENT_SOURCE_DIR}/include/glext/gl.h
                         ${CMAKE_CURRENT_SOURCE_DIR}/src/gl.c)
target_include_directories(GLExt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

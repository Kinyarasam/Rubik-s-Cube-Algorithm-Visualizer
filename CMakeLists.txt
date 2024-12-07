# Minimum version and project name
cmake_minimum_required(VERSION 3.11)
project(RubikVisualizer)

# Set the C standard
set(CMAKE_C_STANDARD 99)

# Include directories for headers
include_directories(include)

# Find all source files in src/
file(GLOB SOURCES "src/*.c")

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link OpenGL and GLUT libraries
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(${PROJECT_NAME} OpenGL::GL glut GLEW)

# Add compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wextra -pedantic")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_custom_target(run
    COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMENT "Running the RubikVisualizer...")

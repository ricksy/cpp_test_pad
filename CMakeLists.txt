cmake_minimum_required (VERSION 3.22.0)

project("tutorial1")

add_executable(${PROJECT_NAME} HelloWorld.cpp)

# git commit hash macro
execute_process(
  COMMAND git log -1 --format=%h
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  OUTPUT_VARIABLE GIT_COMMIT_HASH
  OUTPUT_STRIP_TRAILING_WHITESPACE
)
add_definitions("-DGIT_COMMIT_HASH=\"${GIT_COMMIT_HASH}\"")

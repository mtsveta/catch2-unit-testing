cmake_minimum_required(VERSION 3.24)
project(catch2_unit_testing)

set(CMAKE_CXX_STANDARD 20)

# Find catch2, which is used as the testing framework for okapi
find_package(Catch2 3 REQUIRED)

# Add catch using the catch.hpp
#file(GLOB_RECURSE CXX_FILES_TEST RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.test.cxx)
#add_executable(okapi-cpptests ${CXX_FILES_TEST})
#target_link_libraries(okapi-cpptests Catch2::Catch2)
#target_include_directories(okapi-cpptests PUBLIC ${PROJECT_SOURCE_DIR})

# Add catch using CMake
add_executable(catch2-cmake subfolder-1/test1.cxx)
target_link_libraries(catch2-cmake Catch2::Catch2WithMain)
target_include_directories(catch2-cmake PUBLIC ${PROJECT_SOURCE_DIR})

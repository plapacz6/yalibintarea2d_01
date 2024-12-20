cmake_minimum_required(VERSION 3.17)
project(yalibintarea2d_01)

enable_testing()

find_package(GTest REQUIRED)
include_directories(GTest_INCLUDE_DIR)
link_directories(GTest_LIBRARY_DIR)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include(CheckPIESupported)
# check_pie_supported()

list(APPEND onlyheaderlib_list
    T_Index
)

foreach(target_onlyheaderlib IN LISTS onlyheaderlib_list)
    list(APPEND test_onlyheaderlib_list "test_${target_onlyheaderlib}")
endforeach()


foreach(target_test IN LISTS test_onlyheaderlib_list)
    add_executable("${target_test}" "./${target_test}.cpp")
    target_compile_options("${target_test}" PRIVATE -g3 -Wall -pthread)
    target_include_directories("${target_test}" PRIVATE "../../include")    
    target_link_libraries("${target_test}" PRIVATE         
        GTest::GTest
        GTest::gtest_main
        pthread
    )
    add_test("${target_test}_runner" "${target_test}")
endforeach()

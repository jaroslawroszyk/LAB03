add_library(implementations src/RLE.cpp)
target_include_directories(implementations PUBLIC include)

add_executable(tests uts/RLE_tests.cpp)
target_link_libraries(tests gmock_main gtest gmock implementations)

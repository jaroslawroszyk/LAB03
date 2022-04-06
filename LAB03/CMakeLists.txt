add_library(implementations src/RLE.cpp src/Caesar.cpp)
target_include_directories(implementations PUBLIC include)

add_executable(tests uts/RLE_tests.cpp uts/Caesar_tests.cpp)
target_link_libraries(tests gmock_main gtest gmock implementations)

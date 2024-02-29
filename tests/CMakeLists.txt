include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)


add_executable(tridiagonal_test tridiagonal_test.cpp)
target_link_libraries(tridiagonal_test sle gtest)

add_executable(csr_test csr_test.cpp)
target_link_libraries(csr_test sle gtest)

add_executable(dense_test dense_test.cpp)
target_link_libraries(dense_test sle gtest)

add_executable(vector_operations_test vector_operations_test.cpp)
target_link_libraries(vector_operations_test sle gtest)

add_executable(householder_test householder_test.cpp)
target_link_libraries(householder_test sle gtest)

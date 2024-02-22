add_executable(tridiagonal_test tridiagonal_test.cpp)
target_link_libraries(tridiagonal_test sle gtest)

add_executable(csr_test csr_test.cpp)
target_link_libraries(csr_test sle gtest)

add_executable(dense_test dense_test.cpp)
target_link_libraries(dense_test sle gtest)

add_executable(vector_operations_test vector_operations_test.cpp)
target_link_libraries(vector_operations_test sle gtest)



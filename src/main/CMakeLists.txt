# compile main executable
add_executable(main main.cpp)

# link library
target_link_libraries(main example_static)
# static library
add_library(example_static STATIC FooBar.cpp)

add_library(example_shared SHARED FooBar.cpp)

add_subdirectory(main)

# install libs
install(TARGETS example_static DESTINATION example/lib)
install(TARGETS example_shared DESTINATION example/lib)

# install headers
install(FILES ${PROJECT_SOURCE_DIR}/src/FooBar.h DESTINATION example/include)
file(GLOB example_src
    "*.h"
    "*.cpp"
)


# static library
add_library(example_static STATIC ${example_src})
target_link_libraries( example_static ${OpenCV_LIBS} )

add_library(example_shared SHARED ${example_src})
target_link_libraries( example_shared ${OpenCV_LIBS} )
add_subdirectory(main)

# install libs
# install(TARGETS example_static DESTINATION example/lib)
# install(TARGETS example_shared DESTINATION example/lib)

# install headers
# install(FILES ${PROJECT_SOURCE_DIR}/src/FooBar.h DESTINATION example/include)
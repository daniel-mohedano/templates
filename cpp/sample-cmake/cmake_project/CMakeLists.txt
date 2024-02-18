# Build libraries
# The separation in two lines is needed because libb depends on liba
add_subdirectory(liba)
add_subdirectory(libb)

# Build executable
add_executable(main main.cpp)

# Link the libraries
target_link_libraries(main PUBLIC liba libb)

#target_include_directories(main PUBLIC "${PROJECT_BINARY_DIR}")

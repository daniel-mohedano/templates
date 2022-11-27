# Create CMAKE library
add_library(libb libb.cpp)

# Link any other libraries this depends on
target_link_libraries(libb liba)

# Include src/ directory for correct includes
target_include_directories(libb PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/src" )
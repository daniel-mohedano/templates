# Create library
add_library(libb libb.cpp)

# Link to "liba"
target_link_libraries(libb PRIVATE liba)

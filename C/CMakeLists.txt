aux_source_directory(source MATH_DIRS)
add_library(MathC STATIC ${MATH_DIRS})
target_include_directories(MathC PUBLIC include)
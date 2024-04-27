cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Tutorial VERSION 1.0)

# TODO 4: Replace the following code by:
# * Creating an interface library called tutorial_compiler_flags
#   Hint: use add_library() with the INTERFACE signature
# * Add compiler feature cxx_std_11 to tutorial_compiler_flags
#   Hint: Use target_compile_features()
# TODO 4: 替代下面的代码通过:
# * 创建一个接口库，叫做 tutorial_compiler_flags
# * 添加编译选项 cxx_std_11 给 tutorial_compiler_flags
add_library(tutorial_compiler_flags INTERFACE)
target_compile_features(tutorial_compiler_flags INTERFACE cxx_std_11)

# 也就是替代这里的指定c++的代码
# specify the C++ standard
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 2: Remove EXTRA_INCLUDES list
# TODO 2: 移除 EXTRA_INCLUDES list
# add the MathFunctions library
add_subdirectory(MathFunctions)
# 由于 TODO1，我们现在可以移除了
# list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")

# add the executable
add_executable(Tutorial tutorial.cxx)

# TODO 5: Link Tutorial to tutorial_compiler_flags
# TODO 5: 链接 Tutorial 到 tutorial_compiler_flags
target_link_libraries(Tutorial PUBLIC MathFunctions tutorial_compiler_flags)
# target_link_libraries(Tutorial PUBLIC MathFunctions)

# TODO 3: Remove use of EXTRA_INCLUDES
# TODO 3: 移除 EXTRA_INCLUDES 的使用
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                        #    ${EXTRA_INCLUDES} # 由于 TODO1，我们现在可以移除该项了
                           )

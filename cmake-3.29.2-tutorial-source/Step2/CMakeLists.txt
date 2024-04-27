cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(TutorialConfig.h.in TutorialConfig.h)

# TODO 2: Use add_subdirectory() to add MathFunctions to this project
# TODO 2: 使用 add_subdirectory() 将库 MathFunctions 添加到这个项目
add_subdirectory(MathFunctions)

# add the executable
add_executable(Tutorial tutorial.cxx)

# TODO 3: Use target_link_libraries to link the library to our executable
# TODO 3: 使用 target_link_libraries 链接库到我们的可执行文件
target_link_libraries(Tutorial PUBLIC MathFunctions)

# TODO 4: Add MathFunctions to Tutorial's target_include_directories()
# Hint: ${PROJECT_SOURCE_DIR} is a path to the project source. AKA This folder!
# TODO 4: 添加 MathFunctions 的头文件到 Tutorial 的 target_include_directories()
# Hint: ${PROJECT_SOURCE_DIR} 是指到项目源文件的路径. 也就是这个文件夹!
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/MathFunctions"
                          )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# TODO 1: Set the minimum required version of CMake to be 3.10
# TODO 1: 设置 CMake 最小版本为 3.10
cmake_minimum_required(VERSION 3.10)

# TODO 2: Create a project named Tutorial
# TODO 2: 设置项目名字为 Tutorial
project(Tutorial)

# TODO 7: Set the project version number as 1.0 in the above project command
project(Tutorial VERSION 1.0)


# TODO 6: Set the variable CMAKE_CXX_STANDARD to 11
#         and the variable CMAKE_CXX_STANDARD_REQUIRED to True
# TODO 6: 设置变量 CMAKE_CXX_STANDARD 为 11
#         变量 CMAKE_CXX_STANDARD_REQUIRED 为 True
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# TODO 8: Use configure_file to configure and copy TutorialConfig.h.in to
#         TutorialConfig.h
# TODO 8: 使用配置文件来配置并复制 TutorialConfig.h.in 为 TutorialConfig.h
configure_file(TutorialConfig.h.in TutorialConfig.h)


# TODO 3: Add an executable called Tutorial to the project
# Hint: Be sure to specify the source file as tutorial.cxx
# TODO 3: 在项目中添加一个名为Tutorial的可执行文件
# 提示: 确保将源文件指定为tutorial.cxx
add_executable(Tutorial tutorial.cxx)

# TODO 9: Use target_include_directories to include ${PROJECT_BINARY_DIR}
# TODO 9: 使用 target_include_directories 来包含 ${PROJECT_BINARY_DIR}
#
# 这里的 Tutorial 就是上文 add_executable 中的 Tutorial
# ${PROJECT_BINARY_DIR} 是一个CMake变量，表示项目构建目录（build directory）的路径。
# 这意味着将 ${PROJECT_BINARY_DIR} 路径添加到 Tutorial 目标的包含目录中，而指定属性为 PUBLIC，
# 则意味着：使用Tutorial目标的其他目标也可以访问"${PROJECT_BINARY_DIR}"指定的目录中的头文件或资源。
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
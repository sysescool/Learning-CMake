# TODO 1: Update the minimum required version to 3.15
# TODO 1: 升级最小要求版本 3.15
cmake_minimum_required(VERSION 3.15)

# set the project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
add_library(tutorial_compiler_flags INTERFACE)
target_compile_features(tutorial_compiler_flags INTERFACE cxx_std_11)

# TODO 2: Create helper variables to determine which compiler we are using:
# * Create a new variable gcc_like_cxx that is true if we are using CXX and
#   any of the following compilers: ARMClang, AppleClang, Clang, GNU, LCC
# * Create a new variable msvc_cxx that is true if we are using CXX and MSVC
# Hint: Use set() and COMPILE_LANG_AND_ID
# TODO 2: 创建帮助变量来决定使用哪个编译器
# * 创建变量 gcc_like_cxx, 如果我们正在使用 CXX 和以下任意一款编译器: 
#   ARMClang, AppleClang, Clang, GNU, LCC, 它将变为 true
# * 创建变量 msvc_cxx, 如果我们正在使用 CXX 和 MSVC, 它将变为 true
set(gcc_like_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU,LCC>")
set(msvc_cxx "$<COMPILE_LANG_AND_ID:CXX,MSVC>")

# TODO 3: Add warning flag compile options to the interface library
# tutorial_compiler_flags.
# * For gcc_like_cxx, add flags -Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused
# * For msvc_cxx, add flags -W3
# Hint: Use target_compile_options()
# TODO 3: 添加警告标志编译选项到接口库 tutorial_compiler_flags
# * 对于 gcc_like_cxx，添加标志 -Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused
# * 对于 msvc_cxx, 添加标志 -W3
target_compile_options(tutorial_compiler_flags INTERFACE
  "$<${gcc_like_cxx}:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>"
  "$<${msvc_cxx}:-W3>"
)

# TODO 4: With nested generator expressions, only use the flags for the
# build-tree
# TODO 4: 使用嵌套生成器表达式，只在生成树上使用这些标志
# Hint: Use BUILD_INTERFACE
# BUILD_INTERFACE 关键字用于指示只在构建接口时应用这些选项，而不会在目标的使用者（consumers）的接口中传递。
# 在 CMake 中，一个目标可以被其他目标或项目使用。这些使用目标的实体被称为目标的使用者（consumers）。
# 当一个目标被其他目标或项目使用时，它的属性（包括编译选项）可以在使用者的接口中传递。这意味着使用者可以继承被使用目标的属性，包括编译选项。
target_compile_options(tutorial_compiler_flags INTERFACE
  "$<${gcc_like_cxx}:$<BUILD_INTERFACE:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>>"
  "$<${msvc_cxx}:$<BUILD_INTERFACE:-W3>>"
)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(TutorialConfig.h.in TutorialConfig.h)

# add the MathFunctions library
add_subdirectory(MathFunctions)

# add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PUBLIC MathFunctions tutorial_compiler_flags)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

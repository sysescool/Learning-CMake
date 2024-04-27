# TODO 14: Remove mysqrt.cxx from the list of sources
# TODO 14: 现在可以从源文件列表中移除 mysqrt.cxx 了
#
# TODO 1 中使用了 MathFunctions 这个库，它有源文件 MathFunctions.cxx mysqrt.cxx
# 经过从 TODO 7 到 TODO 14 的修改，添加进 USE_MYMATH 选项来自由地决定使用库中的
# sqrt 函数，还是 std::sqrt 函数，而且如果使用 std::sqrt，我们自己的 sqrt 文件不会编译。
add_library(MathFunctions MathFunctions.cxx)

# TODO 1: Add a library called MathFunctions with sources MathFunctions.cxx
# and mysqrt.cxx
# Hint: You will need the add_library command
# TODO 1: 添加一个叫做 MathFunctions 的库，它使用源文件: MathFunctions.cxx 和 mysqrt.cxx
# Hint: 使用 add_library 命令
# // 与 TODO 14 冲突
# add_library(MathFunctions MathFunctions.cxx mysqrt.cxx)

# TODO 7: Create a variable USE_MYMATH using option and set default to ON
# TODO 7: 创建一个变量 USE_MYMATH 选项，并默认打开
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# TODO 8: If USE_MYMATH is ON, use target_compile_definitions to pass
# USE_MYMATH as a precompiled definition to our source files
# TODO 8: 如果开启 USE_MYMATH，使用 target_compile_definitions 将 
# USE_MYMATH 作为预编译定义(即 #define)传递给我们的源文件
if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
# 原教程里，将 endif() 写在这里 （跳转 本文件末尾）
# endif()


# TODO 12: When USE_MYMATH is ON, add a library for SqrtLibrary with
# source mysqrt.cxx
# TODO 12: 当 USE_MYMATH 开启时，添加源文件 mysqrt.cxx 到库 SqrtLibrary
add_library(SqrtLibrary STATIC
    mysqrt.cxx
)


# TODO 13: When USE_MYMATH is ON, link SqrtLibrary to the MathFunctions Library
# TODO 13: 当启用 USE_MYMATH 时，我们将 SqrtLibrary 链接到 MathFunctions 上
target_link_libraries(MathFunctions PRIVATE SqrtLibrary)

# 但是我认为，将 endif() 写在这里更合适
# 如果不开启 USE_MYMATH, 那么使用 std::sqrt, 这是在 MathFunctions 里通过 #ifdef 决定的
# 那么我们自己实现的 SqrtLibrary 就没有编译的必要，因为不连接它，也不使用它。
endif()

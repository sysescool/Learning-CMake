add_library(MathFunctions MathFunctions.cxx)

# state that anybody linking to us needs to include the current source dir
# to find MathFunctions.h, while we don't.
target_include_directories(MathFunctions
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
                           )

# should we use our own math functions
option(USE_MYMATH "Use tutorial provided math implementation" ON)
if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")

  # library that just does sqrt
  add_library(SqrtLibrary STATIC
              mysqrt.cxx
              )

  # link SqrtLibrary to tutorial_compiler_flags
  target_link_libraries(SqrtLibrary PUBLIC tutorial_compiler_flags)

  target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()

# link MathFunctions to tutorial_compiler_flags
target_link_libraries(MathFunctions PUBLIC tutorial_compiler_flags)

# TODO 1: Create a variable called installable_libs that is a list of all
# libraries we want to install (e.g. MathFunctions and tutorial_compiler_flags)
# Then install the installable libraries to the lib folder.
# Hint: Use the TARGETS and DESTINATION parameters
# TODO 1: 创建变量 installable_libs 表明我们想安装的一系列库 (比如 MathFunctions 和
# tutorial_compiler_flags 库) ，然后安装这些库到库文件夹
# Hint: 使用 TARGETS 和 DESTINATION 参数
set(installable_libs MathFunctions tutorial_compiler_flags)
if(TARGET SqrtLibrary)
  list(APPEND installable_libs SqrtLibrary)
endif()
install(TARGETS ${installable_libs} DESTINATION lib)

# TODO 2: Install the library headers to the include folder.
# Hint: Use the FILES and DESTINATION parameters
# TODO 2: 安装库的头文件到 include 文件夹
# Hint: 使用 FILES 和 DESTINATION 参数
install(FILES MathFunctions.h DESTINATION include)
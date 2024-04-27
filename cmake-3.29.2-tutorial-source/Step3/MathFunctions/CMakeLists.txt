add_library(MathFunctions MathFunctions.cxx)

# TODO 1: State that anybody linking to MathFunctions needs to include the
# current source directory, while MathFunctions itself doesn't.
# Hint: Use target_include_directories with the INTERFACE keyword
# TODO 1: 声明任何链接到 MathFunctions 的都需要包含(include) 当前源目录，除了
# MathFunctions 它自己
# Hint: 使用 target_include_directories 和 INTERFACE
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

  # TODO 6: Link SqrtLibrary to tutorial_compiler_flags
  # TODO 6: 链接 SqrtLibrary 到 tutorial_compiler_flags
  target_link_libraries(SqrtLibrary PUBLIC tutorial_compiler_flags)
  # target_link_libraries(MathFunctions PRIVATE SqrtLibrary)

  # there is an error if no below line, and the repo no below line.
  # 这一行不添加会有错误嗷，这个原网页没有说明
  # MathFunctions/libMathFunctions.a(MathFunctions.cxx.o): In function `mathfunctions::sqrt(double)':
  # MathFunctions.cxx:(.text+0x1b): undefined reference to `mathfunctions::detail::mysqrt(double)'
  # collect2: error: ld returned 1 exit status
  # CMakeFiles/Tutorial.dir/build.make:95: recipe for target 'Tutorial' failed
  # make[2]: *** [Tutorial] Error 1
  # CMakeFiles/Makefile2:67: recipe for target 'CMakeFiles/Tutorial.dir/all' failed
  # make[1]: *** [CMakeFiles/Tutorial.dir/all] Error 2
  # Makefile:83: recipe for target 'all' failed
  # make: *** [all] Error 2
  # 我们自己实现的 sqrt 位于 mysqrt.cxx 属于 SqrtLibrary 库
  # 而 MathFunctions 如果想用自己实现的 sqrt，就要链接 SqrtLibrary 库
  target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()

# TODO 7: Link MathFunctions to tutorial_compiler_flags
# TODO 7: 链接 MathFunctions 到 tutorial_compiler_flags
target_link_libraries(MathFunctions PUBLIC tutorial_compiler_flags)
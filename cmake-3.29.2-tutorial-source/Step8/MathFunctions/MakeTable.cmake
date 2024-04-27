
# TODO 1
# 添加一个可执行文件
add_executable(MakeTable MakeTable.cxx)

# TODO 2
target_link_libraries(MakeTable PRIVATE tutorial_compiler_flags)

# TODO 3
# 添加一条自定义命令，通过运行 MakeTable 生成 Table.h
add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Table.h
  COMMAND MakeTable ${CMAKE_CURRENT_BINARY_DIR}/Table.h
  DEPENDS MakeTable
  )


# Adding a Custom Command and Generated File 添加自定义命令和生成文件


本章没有给出明确的 TODO，所有的 TODO 是我自己加的。

In this tutorial, we decide that we never want to use the platform log and exp functions and instead would like to generate a table of precomputed values to use in the mysqrt function. In this section, we will create the table as part of the build process, and then compile that table into our application.

在本教程中，我们决定永远不使用平台 log 和 exp 函数，而是希望生成一个预计算值表，用于 mysqrt 函数。在本节中，我们将在构建过程中创建表格，然后将表格编译到应用程序中。



```bash
mkdir Step8_build
cd Step8_build
cmake ../Step8
cmake --build .
```

```bash
Scanning dependencies of target MathFunctions
[ 22%] Built target MathFunctions
[ 44%] Built target Tutorial
Scanning dependencies of target MakeTable
[ 55%] Building CXX object MathFunctions/CMakeFiles/MakeTable.dir/MakeTable.cxx.o
[ 66%] Linking CXX executable MakeTable
[ 66%] Built target MakeTable
[ 77%] Generating Table.h
Scanning dependencies of target SqrtLibrary
[ 88%] Building CXX object MathFunctions/CMakeFiles/SqrtLibrary.dir/mysqrt.cxx.o
[100%] Linking CXX static library libSqrtLibrary.a
[100%] Built target SqrtLibrary
```
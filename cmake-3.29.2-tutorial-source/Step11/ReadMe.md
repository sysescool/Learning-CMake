# Adding Export Configuration 添加导出配置

```bash
mkdir Step11_build
cd Step11_build
cmake ../Step11
cmake --build .
```

```bash
total 156
drwxrwxr-x  5 nenly nenly  4096 Apr 30 12:02 ./
drwxr-xr-x 28 nenly nenly  4096 Apr 30 11:47 ../
-rw-rw-r--  1 nenly nenly 19372 Apr 30 11:47 CMakeCache.txt
drwxrwxr-x 34 nenly nenly  4096 Apr 30 12:02 CMakeFiles/
-rw-rw-r--  1 nenly nenly  5107 Apr 30 12:01 cmake_install.cmake
-rw-r--r--  1 nenly nenly  3445 Apr 30 11:47 CPackConfig.cmake
-rw-r--r--  1 nenly nenly  3912 Apr 30 11:47 CPackSourceConfig.cmake
-rw-rw-r--  1 nenly nenly  4372 Apr 30 11:47 CTestTestfile.cmake
-rw-r--r--  1 nenly nenly  2808 Apr 30 11:47 DartConfiguration.tcl
-rwxrwxr-x  1 nenly nenly  8904 Apr 30 12:02 libMathFunctions.so*
-rw-rw-r--  1 nenly nenly  3922 Apr 30 12:02 libSqrtLibrary.a
-rw-rw-r--  1 nenly nenly 24526 Apr 30 12:01 Makefile
-rwxrwxr-x  1 nenly nenly 13752 Apr 30 12:02 MakeTable*
drwxrwxr-x  3 nenly nenly  4096 Apr 30 12:02 MathFunctions/
-rw-rw-r--  1 nenly nenly   787 Apr 30 12:01 MathFunctionsConfig.cmake  # 这就是生成的文件
-rw-r--r--  1 nenly nenly  1380 Apr 30 12:01 MathFunctionsConfigVersion.cmake
-rw-rw-r--  1 nenly nenly  3424 Apr 30 12:01 MathFunctionsTargets.cmake
drwxrwxr-x  3 nenly nenly  4096 Apr 30 11:47 Testing/
-rwxrwxr-x  1 nenly nenly 14880 Apr 30 12:02 Tutorial*
-rw-r--r--  1 nenly nenly   118 Apr 30 11:47 TutorialConfig.h
```
# Packaging Debug and Release 打包调试和发布



TODO 4: 使用以下两个部分的指令，分别编译出 Debug 和 Release 代码

```bash
cd Step12
mkdir debug
cd debug
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .
```

```bash
total 268
drwxrwxr-x 4 xxx xxx  4096 Apr 30 14:27 ./
drwxr-xr-x 5 xxx xxx  4096 Apr 30 14:24 ../
-rw-rw-r-- 1 xxx xxx 16999 Apr 30 14:24 CMakeCache.txt
drwxrwxr-x 6 xxx xxx  4096 Apr 30 14:27 CMakeFiles/
-rw-rw-r-- 1 xxx xxx  5165 Apr 30 14:24 cmake_install.cmake
-rw-r--r-- 1 xxx xxx  3621 Apr 30 14:24 CPackConfig.cmake
-rw-r--r-- 1 xxx xxx  4100 Apr 30 14:24 CPackSourceConfig.cmake
-rw-rw-r-- 1 xxx xxx  4381 Apr 30 14:24 CTestTestfile.cmake
lrwxrwxrwx 1 xxx xxx    22 Apr 30 14:25 libMathFunctionsd.so -> libMathFunctionsd.so.1*
lrwxrwxrwx 1 xxx xxx    26 Apr 30 14:25 libMathFunctionsd.so.1 -> libMathFunctionsd.so.1.0.0*
-rwxrwxr-x 1 xxx xxx 30600 Apr 30 14:25 libMathFunctionsd.so.1.0.0*
-rw-rw-r-- 1 xxx xxx 39290 Apr 30 14:25 libSqrtLibraryd.a
-rw-rw-r-- 1 xxx xxx 10362 Apr 30 14:27 Makefile
-rwxrwxr-x 1 xxx xxx 34080 Apr 30 14:25 MakeTable*
drwxrwxr-x 3 xxx xxx  4096 Apr 30 14:27 MathFunctions/
-rw-r--r-- 1 xxx xxx   486 Apr 30 14:24 MathFunctionsConfig.cmake
-rw-r--r-- 1 xxx xxx  1380 Apr 30 14:24 MathFunctionsConfigVersion.cmake
-rw-rw-r-- 1 xxx xxx  3427 Apr 30 14:24 MathFunctionsTargets.cmake
-rw-r--r-- 1 xxx xxx   118 Apr 30 14:24 TutorialConfig.h
-rwxrwxr-x 1 xxx xxx 67712 Apr 30 14:25 Tutoriald*   # 有后缀字母 d
```

```bash
cd Step12
mkdir release
cd release
cmake --DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

```bash
total 140
drwxrwxr-x 4 nenly nenly  4096 Apr 30 14:30 ./
drwxr-xr-x 5 nenly nenly  4096 Apr 30 14:24 ../
-rw-rw-r-- 1 nenly nenly 17000 Apr 30 14:28 CMakeCache.txt
drwxrwxr-x 6 nenly nenly  4096 Apr 30 14:30 CMakeFiles/
-rw-rw-r-- 1 nenly nenly  5155 Apr 30 14:28 cmake_install.cmake
-rw-r--r-- 1 nenly nenly  3631 Apr 30 14:28 CPackConfig.cmake
-rw-r--r-- 1 nenly nenly  4108 Apr 30 14:28 CPackSourceConfig.cmake
-rw-rw-r-- 1 nenly nenly  4392 Apr 30 14:28 CTestTestfile.cmake
lrwxrwxrwx 1 nenly nenly    21 Apr 30 14:30 libMathFunctions.so -> libMathFunctions.so.1*
lrwxrwxrwx 1 nenly nenly    25 Apr 30 14:30 libMathFunctions.so.1 -> libMathFunctions.so.1.0.0*
-rwxrwxr-x 1 nenly nenly  8904 Apr 30 14:30 libMathFunctions.so.1.0.0*
-rw-rw-r-- 1 nenly nenly  3922 Apr 30 14:30 libSqrtLibrary.a
-rw-rw-r-- 1 nenly nenly 10372 Apr 30 14:29 Makefile
-rwxrwxr-x 1 nenly nenly 13752 Apr 30 14:30 MakeTable*
drwxrwxr-x 3 nenly nenly  4096 Apr 30 14:30 MathFunctions/
-rw-r--r-- 1 nenly nenly   486 Apr 30 14:28 MathFunctionsConfig.cmake
-rw-r--r-- 1 nenly nenly  1380 Apr 30 14:28 MathFunctionsConfigVersion.cmake
-rw-rw-r-- 1 nenly nenly  3436 Apr 30 14:28 MathFunctionsTargets.cmake
-rwxrwxr-x 1 nenly nenly 14880 Apr 30 14:30 Tutorial*    # 没有后缀字母 d
-rw-r--r-- 1 nenly nenly   118 Apr 30 14:28 TutorialConfig.h
```

TODO 6:
```bash
cd Step12
cpack --config MultiCPackConfig.cmake
```

```bash
total 56
drwxr-xr-x  5 nenly nenly 4096 Apr 30 14:32 ./
drwxr-xr-x 28 nenly nenly 4096 Apr 30 11:47 ../
-rw-r--r--  1 nenly nenly 4257 Apr 30 14:23 CMakeLists.txt
-rw-r--r--  1 nenly nenly   84 Apr 11 22:15 Config.cmake.in
-rw-r--r--  1 nenly nenly  245 Apr 11 22:15 CTestConfig.cmake
drwxrwxr-x  4 nenly nenly 4096 Apr 30 14:27 debug/
-rw-r--r--  1 nenly nenly   79 Apr 11 22:15 License.txt
drwxr-xr-x  2 nenly nenly 4096 Apr 11 22:15 MathFunctions/
-rw-rw-r--  1 nenly nenly  195 Apr 30 14:33 MultiCPackConfig.cmake
-rw-rw-r--  1 nenly nenly 2996 Apr 30 14:34 ReadMe.md
drwxrwxr-x  4 nenly nenly 4096 Apr 30 14:30 release/
-rw-r--r--  1 nenly nenly  164 Apr 11 22:15 TutorialConfig.h.in
-rw-r--r--  1 nenly nenly  700 Apr 11 22:15 tutorial.cxx
```

```bash
total 252
drwxr-xr-x  6 nenly nenly  4096 Apr 30 14:35 ./
drwxr-xr-x 28 nenly nenly  4096 Apr 30 11:47 ../
-rw-r--r--  1 nenly nenly  4257 Apr 30 14:23 CMakeLists.txt
-rw-r--r--  1 nenly nenly    84 Apr 11 22:15 Config.cmake.in
drwxrwxr-x  3 nenly nenly  4096 Apr 30 14:35 _CPack_Packages/            # 生成
-rw-r--r--  1 nenly nenly   245 Apr 11 22:15 CTestConfig.cmake
drwxrwxr-x  4 nenly nenly  4096 Apr 30 14:35 debug/
-rw-r--r--  1 nenly nenly    79 Apr 11 22:15 License.txt
drwxr-xr-x  2 nenly nenly  4096 Apr 11 22:15 MathFunctions/
-rw-rw-r--  1 nenly nenly   195 Apr 30 14:33 MultiCPackConfig.cmake
-rw-rw-r--  1 nenly nenly  3755 Apr 30 14:35 ReadMe.md
drwxrwxr-x  4 nenly nenly  4096 Apr 30 14:35 release/
-rwxrwxrwx  1 nenly nenly 53462 Apr 30 14:35 Tutorial-1.0-Linux.sh*      # 生成
-rw-rw-r--  1 nenly nenly 49462 Apr 30 14:35 Tutorial-1.0-Linux.tar.gz   # 生成
-rw-rw-r--  1 nenly nenly 82707 Apr 30 14:35 Tutorial-1.0-Linux.tar.Z    # 生成
-rw-r--r--  1 nenly nenly   164 Apr 11 22:15 TutorialConfig.h.in
-rw-r--r--  1 nenly nenly   700 Apr 11 22:15 tutorial.cxx
```
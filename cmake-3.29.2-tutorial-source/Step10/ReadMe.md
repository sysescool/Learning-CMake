# Selecting Static or Shared Libraries 选择静态库或共享库

```bash
mkdir Step10_build
cd Step10_build
cmake ../Step10 -DBUILD_SHARED_LIBS=OFF
cmake --build .
```

```bash
total 132
drwxrwxr-x  5 xxx xxx  4096 Apr 30 11:26 ./
drwxr-xr-x 27 xxx xxx  4096 Apr 30 11:09 ../
-rw-rw-r--  1 xxx xxx 19373 Apr 30 11:25 CMakeCache.txt
drwxrwxr-x 33 xxx xxx  4096 Apr 30 11:26 CMakeFiles/
-rw-rw-r--  1 xxx xxx  2998 Apr 30 11:25 cmake_install.cmake
-rw-r--r--  1 xxx xxx  3445 Apr 30 11:25 CPackConfig.cmake
-rw-r--r--  1 xxx xxx  3912 Apr 30 11:25 CPackSourceConfig.cmake
-rw-rw-r--  1 xxx xxx  4372 Apr 30 11:25 CTestTestfile.cmake
-rw-r--r--  1 xxx xxx  2808 Apr 30 11:25 DartConfiguration.tcl
-rw-rw-r--  1 xxx xxx  1740 Apr 30 11:26 libMathFunctions.a  # 这个就是动态库
-rw-rw-r--  1 xxx xxx  3922 Apr 30 11:26 libSqrtLibrary.a
-rw-rw-r--  1 xxx xxx 24526 Apr 30 11:25 Makefile
-rwxrwxr-x  1 xxx xxx 13752 Apr 30 11:26 MakeTable*
drwxrwxr-x  3 xxx xxx  4096 Apr 30 11:26 MathFunctions/
drwxrwxr-x  3 xxx xxx  4096 Apr 30 11:25 Testing/
-rwxrwxr-x  1 xxx xxx 15256 Apr 30 11:26 Tutorial*
-rw-r--r--  1 xxx xxx   118 Apr 30 11:25 TutorialConfig.h
```

```bash
mkdir Step10_build
cd Step10_build
cmake ../Step10 -DBUILD_SHARED_LIBS=OFF
cmake --build .
```

```bash
total 140
drwxrwxr-x  5 xxx xxx  4096 Apr 30 11:28 ./
drwxr-xr-x 27 xxx xxx  4096 Apr 30 11:09 ../
-rw-rw-r--  1 xxx xxx 19372 Apr 30 11:28 CMakeCache.txt
drwxrwxr-x 33 xxx xxx  4096 Apr 30 11:28 CMakeFiles/
-rw-rw-r--  1 xxx xxx  3202 Apr 30 11:28 cmake_install.cmake
-rw-r--r--  1 xxx xxx  3445 Apr 30 11:28 CPackConfig.cmake
-rw-r--r--  1 xxx xxx  3912 Apr 30 11:28 CPackSourceConfig.cmake
-rw-rw-r--  1 xxx xxx  4372 Apr 30 11:28 CTestTestfile.cmake
-rw-r--r--  1 xxx xxx  2808 Apr 30 11:28 DartConfiguration.tcl
-rwxrwxr-x  1 xxx xxx  8904 Apr 30 11:28 libMathFunctions.so*  # 这个就是静态库
-rw-rw-r--  1 xxx xxx  3922 Apr 30 11:28 libSqrtLibrary.a
-rw-rw-r--  1 xxx xxx 24526 Apr 30 11:28 Makefile
-rwxrwxr-x  1 xxx xxx 13752 Apr 30 11:28 MakeTable*
drwxrwxr-x  3 xxx xxx  4096 Apr 30 11:28 MathFunctions/
drwxrwxr-x  3 xxx xxx  4096 Apr 30 11:28 Testing/
-rwxrwxr-x  1 xxx xxx 14880 Apr 30 11:28 Tutorial*
-rw-r--r--  1 xxx xxx   118 Apr 30 11:28 TutorialConfig.h
```
# A Basic Starting Point 一个基本的起点

How to Build:

cd the root of this project.

如何编译：

进入项目的根目录。

```bash
mkdir Step1_build
cd Step1_build
# configure the project and generate a native build system
# 配置项目并生成本地构建系统
cmake ../Step1
# call that build system to actually compile/link the project:
# 调用构建系统来实际编译/链接项目
cmake --build .
```

I don't care Visual Studio, if need it, read:https://cmake.org/cmake/help/v3.29/guide/tutorial/A%20Basic%20Starting%20Point.html

不关心 Visual Studio，需要的去看原教程：https://cmake.org/cmake/help/v3.29/guide/tutorial/A%20Basic%20Starting%20Point.html
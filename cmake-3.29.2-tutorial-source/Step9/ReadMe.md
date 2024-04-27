# Packaging an Installer 打包安装程序


构建安装程序:
```bash
mkdir Step9_build
cd Step9_build
cmake ../Step9
cmake --build .
cpack
```
安装程序过程:
```bash
CPack: Create package using STGZ
CPack: Install projects
CPack: - Run preinstall target for: Tutorial
CPack: - Install project: Tutorial []
CPack: Create package
CPack: - package: /home/xxx/cmake-3.29.2-tutorial-source/Step9_build/Tutorial-1.0-Linux.sh generated.
CPack: Create package using TGZ
CPack: Install projects
CPack: - Run preinstall target for: Tutorial
CPack: - Install project: Tutorial []
CPack: Create package
CPack: - package: /home/xxx/cmake-3.29.2-tutorial-source/Step9_build/Tutorial-1.0-Linux.tar.gz generated.
CPack: Create package using TZ
CPack: Install projects
CPack: - Run preinstall target for: Tutorial
CPack: - Install project: Tutorial []
CPack: Create package
CPack: - package: /home/xxx/cmake-3.29.2-tutorial-source/Step9_build/Tutorial-1.0-Linux.tar.Z generated.
```

其他相关设置

To specify the generator, use the -G option. For multi-config builds, use -C to specify the configuration. For example:
要指定生成器，请使用 -G 选项。对于多重配置构建，使用 -C 指定配置。例如
```bash
cpack -G ZIP -C Debug
```
For a list of available generators, see cpack-generators(7) or call cpack --help. An archive generator like ZIP creates a compressed archive of all installed files.
有关可用生成器的列表，请参阅 cpack-generators(7) 或调用 cpack --help 。 archive generator （如 ZIP）会创建一个包含所有已安装文件的压缩包。

To create an archive of the full source tree you would type:
要创建完整源代码树的存档，您可以键入
```bash
cpack --config CPackSourceConfig.cmake
```
Alternatively, run make package or right click the Package target and Build Project from an IDE.
或者，运行 make package 或右击集成开发环境中的 Package 目标和 Build Project 。

Run the installer found in the binary directory. Then run the installed executable and verify that it works.
运行二进制目录中的安装程序。然后运行已安装的可执行文件并验证其是否正常运行。


测试我们打包出来的安装文件

```bash
mkdir Step9_install
cd Step9_build
./Tutorial-1.0-Linux.sh --help
# 下面指令安装需要按两次 y 接收协议和指定安装路径
./Tutorial-1.0-Linux.sh --prefix=$(pwd)/../Step9_install
cd ../Step9_install/Tutorial-1.0-Linux
./bin/Tutorial 6
```

```bash
$ ./Tutorial-1.0-Linux.sh --prefix=$(pwd)/../Step9_install
Tutorial Installer Version: 1.0, Copyright (c) Humanity
This is a self-extracting archive.
The archive will be extracted to: /home/xxx/cmake-3.29.2-tutorial-source/Step9_build/../Step9_install

If you want to stop extracting, please press <ctrl-C>.
This is the open source License.txt file introduced in
CMake/Tutorial/Step9...


Do you accept the license? [yn]: 
y
By default the Tutorial will be installed in:
  "/home/xxx/cmake-3.29.2-tutorial-source/Step9_build/../Step9_install/Tutorial-1.0-Linux"
Do you want to include the subdirectory Tutorial-1.0-Linux?
Saying no will install in: "/home/xxx/cmake-3.29.2-tutorial-source/Step9_build/../Step9_install" [Yn]: 
y 

Using target directory: /home/xxx/cmake-3.29.2-tutorial-source/Step9_build/../Step9_install/Tutorial-1.0-Linux
Extracting, please wait...

Unpacking finished successfully
```


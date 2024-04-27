# Installing and Testing 安装和测试

TODO 1 - TODO 4: Install Rules
TODO 1 - TODO 4: 安装规则

```bash
mkdir Step5_build
cd Step5_build
cmake ../Step5
cmake --build .
# 安装，可能需要 sudo
cmake --install .
# 安装到指定位置
cmake --install . --prefix $(pwd)/../Step5_install
```

For multi-configuration tools, don't forget to use the --config argument to specify the configuration.
对于多配置工具，不要忘记使用 --config 参数指定配置。
```bash
cmake --install . --config Release
```
If using an IDE, simply build the INSTALL target. You can build the same install target from the command line like the following:
如果使用集成开发环境，只需构建 INSTALL 目标即可。你也可以像下面这样通过命令行构建相同的安装目标：
```bash
cmake --build . --target install --config Debug
```

TODO 5 - TODO 9: Testing Support
TODO 5 - TODO 9: 测试支持

```bash
cd Step5_build
ctest -N   # 执行测试
ctest -VV  # 执行测试，并展示详细内容
```
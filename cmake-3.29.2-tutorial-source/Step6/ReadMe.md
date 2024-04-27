# Adding Support for a Testing Dashboard 添加对测试仪表板的支持

TODO 1: Send Results to a Testing Dashboard

TODO 1: 发送测试结果到测试仪表板

For this tutorial, a public dashboard server is used and its corresponding CTestConfig.cmake file is provided for you in this step's root directory. In practice, this file would be downloaded from a project's Settings page on the CDash instance intended to host the test results. Once downloaded from CDash, the file should not be modified locally.
本教程使用了公共仪表盘服务器，并在本步骤的根目录中为您提供了相应的 CTestConfig.cmake 文件。在实际操作中，该文件将从 CDash 实例上用于托管测试结果的项目 Settings 页面下载。从 CDash 下载后，不应在本地修改该文件。


```bash
mkdir Step6_build
cd Step6_build
cmake ../Step6  # 记住，不要执行 cmake --build .
ctest -D Experimental
```

执行上面的命令会被提交到 https://my.cdash.org/index.php?project=CMakeTutorial. 这个网站
注意，如果你提交，会上传和你电脑相关的一些信息，包括但不限于：
计算机名，系统版本，编译器版本，相关路径，处理器频率，核数，内存，时间戳等等个人信息
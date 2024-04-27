# Adding Usage Requirements for a Library 为库添加使用要求


Adding Usage Requirements for a Library

TODO 1 到 TODO 3 学会通过 target_link_libraries() 使用现代的方法添加一个库的依赖关系，而不需要手动指定库依赖关系，则在项目变大时，处理会变得复杂。

Setting the C++ Standard with Interface Libraries

TODO 4 到 TODO 7 添加了一个 Interface Library，来统一管理 c++ 版本

编译：
```bash
mkdir Step3_build
cd Step3_build
cmake ../Step3 -DUSE_MYMATH=OFF
cmake --build .
```

```bash
mkdir Step3_build
cd Step3_build
cmake ../Step3 -DUSE_MYMATH=ON
cmake --build .
```
以上两者均测试通过
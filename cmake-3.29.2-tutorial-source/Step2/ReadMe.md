# Adding a Library - 添加一个库


Learning Adding a Library from TODO 1 - TODO 6

通过 TODO 1 到 TODO 6 学会添加一个库

Adding an option USE_MYMATH from TODO 7 - TODO 14 

通过 TODO 7 到 TODO 14 学会添加了一个选项

编译：
```bash
mkdir Step2_build
cd Step2_build
cmake ../Step2 -DUSE_MYMATH=OFF
cmake --build .
```

```bash
mkdir Step2_build
cd Step2_build
cmake ../Step2 -DUSE_MYMATH=ON
cmake --build .
```
以上两者均测试通过
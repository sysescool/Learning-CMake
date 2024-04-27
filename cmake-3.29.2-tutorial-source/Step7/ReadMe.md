# Adding System Introspection 添加系统自身功能

TODO 1 - TODO 5 Assessing Dependency Availability

TODO 1 到 TODO 5 评估依赖性可用性

我们编译的目标平台可能不具备某些功能的代码。
比如 std::log 和 std::exp，我们假设这两个函数不存在，对它们进行验证，存在则使用，不存在则不使用。

```bash
mkdir Step7_build
cd Step7_build
cmake ../Step7
cmake --build .
```
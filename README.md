# CDODS

Course Design of Data Structure, 数据结构课程设计



### 扩容倍数

如果申请两倍空间, 那么新申请的内存大小恰好严格大于这个动态数组从一开始创建到当前位置申请的所有内存空间的总和, 这意味着以前释放出去的内存无论如何都不会被重复利用, 而小于 2 的增长因子，让部分情况下有可能再申请到以前释放走的内存



### 存储问题

为什么要放在内存中?

warr 是一个中转变量, 考虑到访问频率, 处理以后一直储存在内存中, 加快读取速度. 由于缓存区大小限制, 没有使用 cpu cache 缓存加速



### 规避可能的 bug

C++ 的 bool 类型不稳定, 曾经出现过编译优化 bug.

x86-64 gcc 12.1 到 13.2 的 O2 优化下, `if (a==b)` 会被优化成 `if(!a)`

https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2020/p1964r2.html



### 内省排序

暂时未实现

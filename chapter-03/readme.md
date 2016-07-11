
##Exercise 3.12
> 下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于在不正确，指出原因。
```cpp 
    vector<vector<int>> ivec;           //正确，每个vector元素是int向量
    vector<string> svec = ivec;         //错误，类型不一样
    vector<string> svec(10, "null");    //正确，10个null字符串
```

##Exercise 3.13
>下列vector元素各包含多少元素，这些元素的值分别是多少？

```cpp
    vector<int> v1;             //0个
    vector<int> v2(10);         //10个, 都为0
    vector<int> v3(10, 42);     //10个, 都为42
    vector<int> v4{10};         //1个, 10
    vector<int> v5{10, 42};     //2个, 10, 42
    vector<string> v6{10};      //10个空字符串 
    //注意：提供的值不能用来初始化元素的时候，编译器使用默认值
    vector<string> v1{10, "hi"};//10个, "hi"
```

##Exercise 3.18
>下面的程序合法吗？如果不合法，你准备怎么修改？
```cpp
vector<int> ivec;
ivec[0] = 42;       //错误，不能通过下标的形式添加元素
```
```cpp
vector<int> ivec;
ivec.push_back(42);       
```

##Exercise 3.23
>在100页的二分搜索程序中，为什么用的是mid = beg + (end - beg)/2,而非mid = (end + beg) / 2

因为没有定义两个迭代器的加法，end + beg是不合法的


##Exercise 3.27
>架设txt_size是一个无参数的函数，他的返回值是int。请回答下列那个定义是非法的？为什么？

unsigned buf_size = 1024;

- [x] a.int ia[buf_size];
- [X] b.int ia[4 * 7 - 14];
- [ ] c.int ia[txt_size()];         //错误
- [ ] d.char[11] = "fundamental";   //错误

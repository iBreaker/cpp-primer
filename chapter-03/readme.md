
##Exercise 3.12
> 下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于在不正确，指出原因。
```cpp 
    vector<vector<int>> ivec;           //正确，每个vector元素是int向量
    vector<string> svec = ivec;         //错误，类型不一样
    vector<string> svec(10, "null");    //正确，10个null字符串
```


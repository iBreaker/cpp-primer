
##Exercise 1.7
>编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息

```cpp

#include <iostream>

int main()
{
    /* 
     * 注释中不能嵌套 /**/
     */
    return 0;
}

```
g++报错：
```
ex1_07.cpp: In function ‘int main()’:
ex1_07.cpp:8:7: error: expected primary-expression before ‘/’ token
      */
       ^
ex1_07.cpp:9:5: error: expected primary-expression before ‘return’
     return 0;
     ^
ex1_07.cpp:9:5: error: expected ‘;’ before ‘return’
```

##Exercise 1.8
>下面的for循环完成了什么功能？sum的终值是多少？

```cpp

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; i++)
    {
        sum += i;
    }
    
    cout << "The sum is:" << sum <<endl;
    return 0;
}
```
```
The sum is:0
```
>answer：-100 到 100 的累加，终值是0

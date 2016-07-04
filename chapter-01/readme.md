
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

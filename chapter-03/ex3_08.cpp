#include <iostream>
using namespace std;

int main()
{
    string str;
    
    cout << "Please input a string" <<endl;
    cin >> str;

    // for语句更好，因为可以自动的结束循环，while需要自己判断
    // 什么时候结束循环

    int i = 1;      
    while(i <= str.size())
    {
        str[i] = 'x;
        i++
    }

    cout << str << endl;
    return 0;
}

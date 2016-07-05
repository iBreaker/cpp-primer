
#include <iostream>
using namespace std;

int main()
{
    unsigned u = 10, u2 = 42;   // unsigned int 类型
    cout << u2 - u << endl;
    cout << u - u2 << endl;     // 溢出

    int i = 10, i2 = 42;
    cout << i2 - i << endl;     
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    cout << u - i2 << endl;     // 溢出

}

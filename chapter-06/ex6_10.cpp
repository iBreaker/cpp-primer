
#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 1;
    int b = 2;

    cout << "before :" << "a is " << a << " b is " << b << endl;
    exchange(a, b);
    cout << "after :" << "a is " << a << " b is " << b << endl;
    return 0;
}

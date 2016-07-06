
#include <iostream>
using namespace std;

int main()
{
    const string s = "This is a string!";

    // c 是const char &类型的
    for(auto &c:s)
    {
        cout << c;
    }
    cout << endl; 
    return 0;
}

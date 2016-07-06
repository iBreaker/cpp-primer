#include <iostream>
using namespace std;

int main()
{
    string str;
    
    cout << "Please input a string" <<endl;
    cin >> str;

    for(auto &c:str)
    {
        c = 'x';
    }

    cout << str << endl;
    return 0;
}

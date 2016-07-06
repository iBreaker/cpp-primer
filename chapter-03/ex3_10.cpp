
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "palese input a string" << endl;

    getline(cin, str);
    for (auto ch:str)
    {
        if(!ispunct(ch))
        {
            cout << ch;
        }
    }
    cout << endl;
    return 0;
}

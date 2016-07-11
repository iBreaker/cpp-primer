#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char a1[20] = "hello";
    char a2[6] = "world";

    strcpy(a1 + 5, a2);

    for(int i = 0; i < 20; i++)
    {
        cout << a1[i];
    }
    cout << endl;
}

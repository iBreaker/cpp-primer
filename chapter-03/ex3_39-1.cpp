#include <iostream>
using namespace std;

int main()
{
    char a[10] = {'h','e','l','l','o','\0'};
    char b[10] = {'w','o','r','l','d','\0'};

    for(int i = 0; i < 10; i++)
    {
        if(a[i] != b[i])
        {
            cout << "Different" <<endl;
            return 0;
        }
    }
    cout << "The same" << endl;
    return 0;
}

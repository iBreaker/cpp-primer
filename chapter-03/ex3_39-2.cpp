#include <iostream>
using namespace std;

int main()
{
    string a = {'h','e','l','l','o','\0'};
    string b = {'w','o','r','l','d','\0'};

    for(int i = 0; i < 10; i++)
    {
        if(a != b)
        {
            cout << "Different" <<endl;
            return 0;
        }
    }
    cout << "The same" << endl;
    return 0;
}

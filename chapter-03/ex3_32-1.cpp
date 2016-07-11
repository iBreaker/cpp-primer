
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10] ;

    for(int i = 0; i < 10; i++)
    {
        a[i] = i;
        cout << a[i] << " " ;
    }

    cout << endl;

    int a2[10];
    for(int i = 0; i < 10; i++)
    {
        a2[i] = a[i];
        cout << a2[i] << " " ;
    }

    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int *p = &a[0]; p <= &a[9]; p++)
    {
        *p = 0;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

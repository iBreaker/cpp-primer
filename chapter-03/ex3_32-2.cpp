
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10, 0) ;

    for(int i = 0; i < 10; i++)
    {
        a[i] = i;
        cout << a[i] << " " ;
    }

    cout << endl;


    vector<int> a2(10, 0) ;
    a2 = a;

    for(int i = 0; i < 10; i++)
    {
        cout << a2[i] << " " ;
    }

    cout << endl;
    return 0;
}

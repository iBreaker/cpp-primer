#include <iostream>
using namespace std;

int main()
{
    cout << "please input array 1 (10 nums)" << endl;
    int array1[10] = {};
    for(int i = 0; i < 10; i++)
    {
       cin >> array1[i]; 
    }

    cout << "please input array 2 (10 nums)" << endl;
    int array2[10] = {};
    for(int i = 0; i < 10; i++)
    {
       cin >> array2[i]; 
       if (array2[i] != array1[i])
       {
            cout << "different" <<endl;
            return 0;
       }
    }

    cout << "The same" << endl;
    return 0;
 
}

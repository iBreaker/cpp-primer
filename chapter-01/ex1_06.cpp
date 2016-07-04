
#include <iostream>
using namespace std;

int main()
{
    int v1, v2;

    cout << "Enter two numbers:" ;
    cout << endl;

    cin >> v1; 
    cin >> v2;

    /***
     * 错误
    cout << "The product of " << v1 ;
        << " and " << v2 ;
        << " is: " << v1 * v2 << endl;
    ***/
    cout << "The product of " << v1 ;
    cout << " and " << v2 ;
    cout << " is: " << v1 * v2 << endl;
 
    
    return 0;
}

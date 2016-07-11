#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(10, 0);    
    vector<int> v2(10, 0);    

    cout << "Please input array1"  << endl;
    int tmp;
    for(auto i = v1.begin(); i != v1.end(); i++)
    {
        cin >> *i; 
    }


    cout << "Please input array2"  << endl;
    for(auto i = v2.begin(); i != v2.end(); i++)
    {
        cin >> *i;
    }


    if(v1 == v2)
    {
        cout << "The same" <<endl;
    }
    else
    {
        cout << "Different" << endl;
    }
    
    return 0;

}

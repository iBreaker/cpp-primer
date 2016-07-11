
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    for(auto p = values.begin(); p != values.end(); p++)
    {
        *p *= 2;
    }

    for(auto p = values.begin(); p != values.end(); p++)
    {
        cout << *p <<endl;
    }
    return 0;
}

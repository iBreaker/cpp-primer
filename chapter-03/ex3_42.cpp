#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec= {1,2,3,4,5,6,7,8,9,0};
    int values[10];


    for(int i = 0; i < 10; i++)
    {
        values[i] = vec[i];
    }

    for(int i = 0; i < 10; i++)
    {
        cout <<  i;
    }


    cout << endl;
    return 0;
}

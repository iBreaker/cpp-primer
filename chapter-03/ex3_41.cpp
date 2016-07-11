#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int values[] = {1,2,3,4,5,6,7,8,9,0};

    vector<int> vec;

    for(int i = 0; i < 10; i++)
    {
        vec.push_back(values[i]);    
    }

    for(auto i:vec)
    {
        cout <<  i;
    }

    cout << endl;
    return 0;
}

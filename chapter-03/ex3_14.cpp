
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v;
    vector<int> a;
    while(cin >> v)
    {
        a.push_back(v);
    }

    for(auto i:a)
    {
        cout << i <<endl;
    }
    return 0;
}

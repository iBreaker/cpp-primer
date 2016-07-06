
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string v;
    vector<string> a;
    while(getline(cin, v))
    {
        a.push_back(v);
    }

    for(auto i:a)
    {
        cout << i <<endl;
    }
    return 0;
}

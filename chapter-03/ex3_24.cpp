
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> values;
    int value;
    while(cin >> value)
    {
        values.push_back(value);
    }

    for(auto p = values.begin(); p != values.end() - 1; p++)
    {
        cout << *p + *(p + 1) << " ";
    }
    cout << end;
    return 0;
}

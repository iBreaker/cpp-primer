
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int val;
    while(cin >> val)
    {
        arr.push_back(val);
    }

    for(int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] + arr[i+1] << " ";
    }
    cout << endl;
    return 0;
}

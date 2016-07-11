
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

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] + arr[arr.size() - i - 1] << " ";
    }
    cout << endl;
    return 0;
}

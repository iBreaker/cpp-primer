
#include <iostream>
using namespace std;

int main()
{
    cout << "please input two nums:" << endl;

    int v1, v2, sum{0};
    cin >> v1 >> v2;

    if (v1 > v2)
    {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }

    for(int value = v1; value <= v2; value++)
    {
        sum += value;
    }
    
    cout << "The sum is:" << sum << endl;
    return 0;
}

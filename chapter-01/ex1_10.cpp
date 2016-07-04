
#include <iostream>
using namespace std;

int main()
{
    int value{10}, sum{0};

    while(value >=0 )
    {
        sum += value;
        value --;
    }
    cout << "The sum is:" << sum << endl;
    return 0;
}

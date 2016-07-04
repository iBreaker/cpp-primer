
#include <iostream>
using namespace std;

int main()
{
    cout << "Please input two nums" << endl;

    int v1 = {0}, v2 = {0};

    cin >> v1 >> v2 ;
    
    if (v1 > v2)
    {
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    
    int sum(0), value(v1);

    while(value >= v1 && value <= v2)
    {
        sum +=value;
        value ++;
    }

    cout << "The sum is:" << sum << endl;
    return 0;
}

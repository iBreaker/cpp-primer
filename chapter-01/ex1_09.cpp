
#include <iostream>
using namespace std;

int main()
{
    int value(50), sum(0);
    
    while(value <= 100)
    {
        sum += value;
        value ++;
    }

    cout << "The sum is:"<<sum << endl;; 
    return 0;    
}

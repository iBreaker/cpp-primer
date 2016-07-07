
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(10, 42); //第一种最好
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
    vector<int> v3 = v1;

    return 0;
}

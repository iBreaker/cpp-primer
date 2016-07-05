
#include "sales_item.h"
using namespace std;

int main()
{
    Sales_item si1;
    Sales_item si2;

    cin >> si1 >> si2;

    if(si1 == si2)
    {
        Sales_item si = si1 + si2;
        cout << si << endl;
    }

    return 0;
}

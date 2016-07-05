
#include "sales_item.h"
using namespace std;

int main()
{
    Sales_item total_si, si;

    if (!(cin >> total_si))
        return -1;
    while(cin >> si && si.isbn() == total_si.isbn())
    {
        total_si += si;
    }

    cout << total_si << endl;

    return 0;
}

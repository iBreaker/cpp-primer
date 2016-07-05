
#include "sales_item.h"
using namespace std;

int main()
{
    Sales_item total_si, si;

    cin >> total_si;
    while(cin >> si && si.isbn() == total_si.isbn())
    {
        total_si += si;
    }

    cout << total_si << endl;

    return 0;
}

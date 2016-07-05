
#include "sales_item.h"
using namespace std;

int main()
{
    Sales_item total_si, si;
    int count{0};

    if (!(cin >> total_si))
        return -1;
    else
        count ++;

    while(cin >> si)
    {
        if(si.isbn() == total_si.isbn())
        {
            //相同 累加
            total_si += si;
            count ++;
        }
        else
        {
            // 不同 输出
            cout << total_si.isbn() << ":" << count << endl;
            count = 1;
            total_si = si;
        }
    }

    cout << total_si << endl;

    return 0;
}

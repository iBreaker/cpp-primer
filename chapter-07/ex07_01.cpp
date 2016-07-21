
#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total; 
    if(cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            cout << trans.bookNo << ":" << total.bookNo << endl; 
            if(trans.bookNo == total.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << endl;
                total = trans;
            }
        }
    }
    else
    {
        return -1;
    }
    return 0;
}

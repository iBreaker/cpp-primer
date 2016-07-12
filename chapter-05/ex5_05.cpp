#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
        int grade;
        if(!(cin >> grade))
            return 0;

        string lattergrade;
        if(grade < 60)
            lattergrade = 'F';
        else if(grade < 70)
            lattergrade = "D";
        else if(grade < 80)
            lattergrade = "C";
        else if(grade < 90)
            lattergrade = "B";
        else
            lattergrade = "A";

        cout << lattergrade << endl;
    }
}

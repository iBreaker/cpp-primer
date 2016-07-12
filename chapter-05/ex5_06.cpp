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
        if(grade >= 60 && grade < 70)
            lattergrade = "D";
        if(grade >= 70 && grade < 80)
            lattergrade = "C";
        if(grade >= 80 && grade < 90)
            lattergrade = "B";
        if(grade == 100)
            lattergrade = "A";

        cout << lattergrade << endl;
    }
}

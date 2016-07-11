#include <iostream>
using namespace std;

int main()
{
    int ia[3][4] = {{1,3,5,1}, {3,4,5,5}, {4,5,1,2}};

    cout << "---" <<endl;
    for(int (& row)[4] :ia) //int [4]类型的引用
    {
        for(int col:row)
        {
            cout << col << " " ;
        }
        cout << endl;
    }

    cout << "---" <<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << ia[i][j] << " " ;
        }
        cout << endl;
    }

    cout << "---" <<endl;
    for(int (*p)[4] = (int (*)[4])ia; p <= &ia[2]; p++)     
    {
        for(int *q = (int *)p; q < (int *)(p + 1); q++)
        {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}

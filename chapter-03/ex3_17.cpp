
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> str;
    string temp;

    while(cin >> temp)
    {
        str.push_back(temp);
    }

    cout << endl;

    for(string s:str)
    {
        for(char &c:s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }
}


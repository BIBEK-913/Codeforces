#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, l;
    string word;
    cin >> t;
    while (t--)
    {
        cin >> word;
        l = word.length();
        if (l > 10)
        {
            cout << word.at(0) << l - 2 << word.at(l - 1) << endl;
        }
        else
            cout << word << endl;
    }
    return 0;
}
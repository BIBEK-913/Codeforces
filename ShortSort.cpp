#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
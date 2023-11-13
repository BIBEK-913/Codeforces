#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        vector<char> cat;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for (i = 0; i < n; i++)
        {
            if (i == 0)
                cat.push_back(s[i]);
            else if (s[i] != s[i - 1])
                cat.push_back(s[i]);
        }
        string purr(cat.begin(), cat.end());
        if (purr == "MEOW")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
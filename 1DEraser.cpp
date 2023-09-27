#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t, n, k, c, i;
    string s;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> k;
        cin >> s;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                c++;
                i += k - 1;
            }
        }
        cout << c << endl;
    }
    return 0;
}
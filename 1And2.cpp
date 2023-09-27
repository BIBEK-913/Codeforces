#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, i, c, c1;
    cin >> t;
    while (t--)
    {
        c = 0;
        c1 = 0;
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                c++;
        }
        if (c == 0)
            cout << "1" << endl;
        else if (c == 1)
            cout << "-1" << endl;
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] == 2)
                    c1++;
                if (c1 == c - c1)
                {
                    cout << i + 1 << endl;
                    break;
                }
                if (i == n - 1)
                    cout << "-1" << endl;
            }
        }
    }
    return 0;
}
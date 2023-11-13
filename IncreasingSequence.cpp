#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, k, i, c;
    cin >> t;
    while (t--)
    {
        k = 0;
        c = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] > 1)
        {
            k = a[0] - 1;
            for (i = 0; i < n; i++)
            {
                a[i] -= k;
            }
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1])
                    c++;
            }
        }
        else
            cout << a[n - 1] + 1 + c << endl;
    }
    return 0;
}
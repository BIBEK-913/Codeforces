#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, i, mina, minb, mincost;
    cin >> t;
    while (t--)
    {
        mincost = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            i ? mina = min(mina, a[i]) : mina = a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            i ? minb = min(minb, b[i]) : minb = b[i];
        }
        for (i = 0; i < n; i++)
        {
            mincost += min(a[i] + minb, b[i] + mina);
        }
        cout << mincost << endl;
    }
    return 0;
}
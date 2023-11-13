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
        c = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
                c++;
        }
        c ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long t, i, j, n, k, a, b, d1, d2, x1, y1, x2, y2, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> a >> b;
        vector<vector<long long>> arr(n, vector<long long>(2, 0));
        for (j = 0; j < n; j++)
        {
            cin >> arr[j][0] >> arr[j][1];
        }
        if (a <= k && b <= k)
            cout << "0" << endl;
        else if (k == 0)
        {
            cout << abs(arr[b - 1][0] - arr[a - 1][0]) + abs(arr[b - 1][1] - arr[a - 1][1]) << endl;
        }
        else
        {
            x1 = arr[b - 1][0];
            y1 = arr[b - 1][1];
            d1 = abs(x1 - arr[0][0]) + abs(y1 - arr[0][1]);
            for (j = 1; j < k; j++)
            {
                d1 = min(d1, abs(x1 - arr[j][0]) + abs(y1 - arr[j][1]));
            }
            x2 = arr[a - 1][0];
            y2 = arr[a - 1][1];
            d2 = abs(x2 - arr[0][0]) + abs(y2 - arr[0][1]);
            for (j = 1; j < k; j++)
            {
                d2 = min(d2, abs(x2 - arr[j][0]) + abs(y2 - arr[j][1]));
            }
            d = abs(arr[b - 1][0] - arr[a - 1][0]) + abs(arr[b - 1][1] - arr[a - 1][1]);
            if (d == (d1 + d2))
                cout << d << endl;
            else
                cout << min(d, d1 + d2) << endl;
        }
    }
    return 0;
}
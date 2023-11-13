#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, i, add;
    long long prod;
    cin >> t;
    while (t--)
    {
        prod = 1;
        cin >> n;
        vector<int> gift(n);
        for (i = 0; i < n; i++)
        {
            cin >> gift[i];
            if (i == 0)
                add = gift[i];
            else
                add = min(add, gift[i]);
        }
        int c = 1;
        for (i = 0; i < n; i++)
        {
            if (gift[i] == add && c == 1)
            {
                prod *= add + 1;
                c = 0;
            }
            else
                prod *= gift[i];
        }
        cout << prod << endl;
    }

    return 0;
}
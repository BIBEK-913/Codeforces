#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, c = 0, ai;
    vector<int> a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> ai;
            a.push_back(ai);
        }
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] > a[i + 1])
                c = max(c, a[i]);
        }
        cout << c << endl;
        c = 0;
        a.clear();
    }
    return 0;
}
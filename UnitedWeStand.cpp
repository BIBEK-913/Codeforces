#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, j;
    vector<int> b, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        if (a[0] == a[a.size() - 1])
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (i > 0 && a[i] != a[i - 1])
                {
                    j = i;
                    break;
                }
                b.push_back(a[i]);
            }
            for (int i = j; i < a.size(); i++)
            {
                c.push_back(a[i]);
            }
            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
        a.clear();
        b.clear();
        c.clear();
    }
    return 0;
}
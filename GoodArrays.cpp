#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, c = 0, ai;
    long long sum = 0, parsum = 0;
    vector<int> a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> ai;
            sum += ai;
            a.push_back(ai);
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 1)
                c++;
            // else
            // parsum += a[i];
        }
        if (2 * c < sum && a.size() > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        c = 0;
        sum = 0;
        // parsum = 0;
        a.clear();
    }
    return 0;
}
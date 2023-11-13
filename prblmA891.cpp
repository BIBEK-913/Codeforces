#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, ai, sum1 = 0, sum = 0;
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
        for (int i = 0; i < a.size() - 1; i++)
        {
            sum1 += a[i];
            if (sum1 % 2 == (sum - sum1) % 2)
            {
                cout << "YES" << endl;
                break;
            }
            else if (i == a.size() - 2)
                cout << "NO" << endl;
        }
        sum1 = 0;
        sum = 0;
        a.clear();
    }
    return 0;
}
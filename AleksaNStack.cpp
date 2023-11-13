#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long long> a(n);
        /*condition e.g. 3a2 not divisible by a0+a1
        for odd number sequence, ai=2*i-1 (i>=1);
        a0 + a1 ~(2 * i - 1) + (2 * i + 2 - 1) = 2i - 1 + 2i + 1 = 2i 3a2 / a0 + a1 ~3(2i - 1) / 2i = 3(1 - 1 / 2i)
                since 1 / 2i <1(a fraction)(i >= 1),the overall expression is a fraction*/

        a[0] = 1;
        for (i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + 2;
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t, a, b, n, i, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> a >> b >> n;
        c += b;
        while (n--)
        {
            int x;
            cin >> x;
            if (x <= a)
                c += x;
            else
                c += a;
        }
        cout << c - 1 << endl;
    }
    return 0;
}
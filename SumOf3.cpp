#include <iostream>
using namespace std;
int main()
{
    int t, n, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> n;
        x = 1;
        y = 2;
        z = n - 3;
        if ((z == x || z == y) || z % 3 == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}